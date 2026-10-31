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

// Function: sub_003425C0
// Address: 0x3425c0 - 0x342828
void sub_003425C0_0x3425c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003425C0_0x3425c0");
#endif

    switch (ctx->pc) {
        case 0x3425c0u: goto label_3425c0;
        case 0x3425c4u: goto label_3425c4;
        case 0x3425c8u: goto label_3425c8;
        case 0x3425ccu: goto label_3425cc;
        case 0x3425d0u: goto label_3425d0;
        case 0x3425d4u: goto label_3425d4;
        case 0x3425d8u: goto label_3425d8;
        case 0x3425dcu: goto label_3425dc;
        case 0x3425e0u: goto label_3425e0;
        case 0x3425e4u: goto label_3425e4;
        case 0x3425e8u: goto label_3425e8;
        case 0x3425ecu: goto label_3425ec;
        case 0x3425f0u: goto label_3425f0;
        case 0x3425f4u: goto label_3425f4;
        case 0x3425f8u: goto label_3425f8;
        case 0x3425fcu: goto label_3425fc;
        case 0x342600u: goto label_342600;
        case 0x342604u: goto label_342604;
        case 0x342608u: goto label_342608;
        case 0x34260cu: goto label_34260c;
        case 0x342610u: goto label_342610;
        case 0x342614u: goto label_342614;
        case 0x342618u: goto label_342618;
        case 0x34261cu: goto label_34261c;
        case 0x342620u: goto label_342620;
        case 0x342624u: goto label_342624;
        case 0x342628u: goto label_342628;
        case 0x34262cu: goto label_34262c;
        case 0x342630u: goto label_342630;
        case 0x342634u: goto label_342634;
        case 0x342638u: goto label_342638;
        case 0x34263cu: goto label_34263c;
        case 0x342640u: goto label_342640;
        case 0x342644u: goto label_342644;
        case 0x342648u: goto label_342648;
        case 0x34264cu: goto label_34264c;
        case 0x342650u: goto label_342650;
        case 0x342654u: goto label_342654;
        case 0x342658u: goto label_342658;
        case 0x34265cu: goto label_34265c;
        case 0x342660u: goto label_342660;
        case 0x342664u: goto label_342664;
        case 0x342668u: goto label_342668;
        case 0x34266cu: goto label_34266c;
        case 0x342670u: goto label_342670;
        case 0x342674u: goto label_342674;
        case 0x342678u: goto label_342678;
        case 0x34267cu: goto label_34267c;
        case 0x342680u: goto label_342680;
        case 0x342684u: goto label_342684;
        case 0x342688u: goto label_342688;
        case 0x34268cu: goto label_34268c;
        case 0x342690u: goto label_342690;
        case 0x342694u: goto label_342694;
        case 0x342698u: goto label_342698;
        case 0x34269cu: goto label_34269c;
        case 0x3426a0u: goto label_3426a0;
        case 0x3426a4u: goto label_3426a4;
        case 0x3426a8u: goto label_3426a8;
        case 0x3426acu: goto label_3426ac;
        case 0x3426b0u: goto label_3426b0;
        case 0x3426b4u: goto label_3426b4;
        case 0x3426b8u: goto label_3426b8;
        case 0x3426bcu: goto label_3426bc;
        case 0x3426c0u: goto label_3426c0;
        case 0x3426c4u: goto label_3426c4;
        case 0x3426c8u: goto label_3426c8;
        case 0x3426ccu: goto label_3426cc;
        case 0x3426d0u: goto label_3426d0;
        case 0x3426d4u: goto label_3426d4;
        case 0x3426d8u: goto label_3426d8;
        case 0x3426dcu: goto label_3426dc;
        case 0x3426e0u: goto label_3426e0;
        case 0x3426e4u: goto label_3426e4;
        case 0x3426e8u: goto label_3426e8;
        case 0x3426ecu: goto label_3426ec;
        case 0x3426f0u: goto label_3426f0;
        case 0x3426f4u: goto label_3426f4;
        case 0x3426f8u: goto label_3426f8;
        case 0x3426fcu: goto label_3426fc;
        case 0x342700u: goto label_342700;
        case 0x342704u: goto label_342704;
        case 0x342708u: goto label_342708;
        case 0x34270cu: goto label_34270c;
        case 0x342710u: goto label_342710;
        case 0x342714u: goto label_342714;
        case 0x342718u: goto label_342718;
        case 0x34271cu: goto label_34271c;
        case 0x342720u: goto label_342720;
        case 0x342724u: goto label_342724;
        case 0x342728u: goto label_342728;
        case 0x34272cu: goto label_34272c;
        case 0x342730u: goto label_342730;
        case 0x342734u: goto label_342734;
        case 0x342738u: goto label_342738;
        case 0x34273cu: goto label_34273c;
        case 0x342740u: goto label_342740;
        case 0x342744u: goto label_342744;
        case 0x342748u: goto label_342748;
        case 0x34274cu: goto label_34274c;
        case 0x342750u: goto label_342750;
        case 0x342754u: goto label_342754;
        case 0x342758u: goto label_342758;
        case 0x34275cu: goto label_34275c;
        case 0x342760u: goto label_342760;
        case 0x342764u: goto label_342764;
        case 0x342768u: goto label_342768;
        case 0x34276cu: goto label_34276c;
        case 0x342770u: goto label_342770;
        case 0x342774u: goto label_342774;
        case 0x342778u: goto label_342778;
        case 0x34277cu: goto label_34277c;
        case 0x342780u: goto label_342780;
        case 0x342784u: goto label_342784;
        case 0x342788u: goto label_342788;
        case 0x34278cu: goto label_34278c;
        case 0x342790u: goto label_342790;
        case 0x342794u: goto label_342794;
        case 0x342798u: goto label_342798;
        case 0x34279cu: goto label_34279c;
        case 0x3427a0u: goto label_3427a0;
        case 0x3427a4u: goto label_3427a4;
        case 0x3427a8u: goto label_3427a8;
        case 0x3427acu: goto label_3427ac;
        case 0x3427b0u: goto label_3427b0;
        case 0x3427b4u: goto label_3427b4;
        case 0x3427b8u: goto label_3427b8;
        case 0x3427bcu: goto label_3427bc;
        case 0x3427c0u: goto label_3427c0;
        case 0x3427c4u: goto label_3427c4;
        case 0x3427c8u: goto label_3427c8;
        case 0x3427ccu: goto label_3427cc;
        case 0x3427d0u: goto label_3427d0;
        case 0x3427d4u: goto label_3427d4;
        case 0x3427d8u: goto label_3427d8;
        case 0x3427dcu: goto label_3427dc;
        case 0x3427e0u: goto label_3427e0;
        case 0x3427e4u: goto label_3427e4;
        case 0x3427e8u: goto label_3427e8;
        case 0x3427ecu: goto label_3427ec;
        case 0x3427f0u: goto label_3427f0;
        case 0x3427f4u: goto label_3427f4;
        case 0x3427f8u: goto label_3427f8;
        case 0x3427fcu: goto label_3427fc;
        case 0x342800u: goto label_342800;
        case 0x342804u: goto label_342804;
        case 0x342808u: goto label_342808;
        case 0x34280cu: goto label_34280c;
        case 0x342810u: goto label_342810;
        case 0x342814u: goto label_342814;
        case 0x342818u: goto label_342818;
        case 0x34281cu: goto label_34281c;
        case 0x342820u: goto label_342820;
        case 0x342824u: goto label_342824;
        default: break;
    }

    ctx->pc = 0x3425c0u;

label_3425c0:
    // 0x3425c0: 0x27bde710  addiu       $sp, $sp, -0x18F0
    ctx->pc = 0x3425c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294960912));
label_3425c4:
    // 0x3425c4: 0x7fb218b0  sq          $s2, 0x18B0($sp)
    ctx->pc = 0x3425c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6320), GPR_VEC(ctx, 18));
label_3425c8:
    // 0x3425c8: 0x7fb41890  sq          $s4, 0x1890($sp)
    ctx->pc = 0x3425c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6288), GPR_VEC(ctx, 20));
label_3425cc:
    // 0x3425cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3425ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3425d0:
    // 0x3425d0: 0x7fb018d0  sq          $s0, 0x18D0($sp)
    ctx->pc = 0x3425d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6352), GPR_VEC(ctx, 16));
label_3425d4:
    // 0x3425d4: 0x7fb118c0  sq          $s1, 0x18C0($sp)
    ctx->pc = 0x3425d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6336), GPR_VEC(ctx, 17));
label_3425d8:
    // 0x3425d8: 0x7fb318a0  sq          $s3, 0x18A0($sp)
    ctx->pc = 0x3425d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6304), GPR_VEC(ctx, 19));
label_3425dc:
    // 0x3425dc: 0x7fb51880  sq          $s5, 0x1880($sp)
    ctx->pc = 0x3425dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6272), GPR_VEC(ctx, 21));
label_3425e0:
    // 0x3425e0: 0x7fb61870  sq          $s6, 0x1870($sp)
    ctx->pc = 0x3425e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6256), GPR_VEC(ctx, 22));
label_3425e4:
    // 0x3425e4: 0xffbf1860  sd          $ra, 0x1860($sp)
    ctx->pc = 0x3425e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 6240), GPR_U64(ctx, 31));
label_3425e8:
    // 0x3425e8: 0xe7b518e8  swc1        $f21, 0x18E8($sp)
    ctx->pc = 0x3425e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 6376), bits); }
label_3425ec:
    // 0x3425ec: 0xe7b418e0  swc1        $f20, 0x18E0($sp)
    ctx->pc = 0x3425ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 6368), bits); }
label_3425f0:
    // 0x3425f0: 0xc089b98  jal         func_226E60
label_3425f4:
    if (ctx->pc == 0x3425F4u) {
        ctx->pc = 0x3425F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425F0u;
        // 0x3425f4: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425F8u;
        goto label_3425f8;
    }
    ctx->pc = 0x3425F0u;
    SET_GPR_U32(ctx, 31, 0x3425F8u);
    ctx->pc = 0x3425F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425F0u;
    // 0x3425f4: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x3425F0u, 0x3425F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425F8u;
label_3425f8:
    // 0x3425f8: 0x8e460084  lw          $a2, 0x84($s2)
    ctx->pc = 0x3425f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_3425fc:
    // 0x3425fc: 0x10c0007e  beqz        $a2, . + 4 + (0x7E << 2)
label_342600:
    if (ctx->pc == 0x342600u) {
        ctx->pc = 0x342600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425FCu;
        // 0x342600: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342604u;
        goto label_342604;
    }
    ctx->pc = 0x3425FCu;
    {
        const bool branch_taken_0x3425fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x342600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425FCu;
        // 0x342600: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425fc) {
            ctx->pc = 0x3427F8u;
            goto label_3427f8;
        }
    }
    ctx->pc = 0x342604u;
label_342604:
    // 0x342604: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x342604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_342608:
    // 0x342608: 0x8e480034  lw          $t0, 0x34($s2)
    ctx->pc = 0x342608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_34260c:
    // 0x34260c: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x34260cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_342610:
    // 0x342610: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x342610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_342614:
    // 0x342614: 0x24022012  addiu       $v0, $zero, 0x2012
    ctx->pc = 0x342614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8210));
label_342618:
    // 0x342618: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x342618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_34261c:
    // 0x34261c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x34261cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_342620:
    // 0x342620: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x342620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_342624:
    // 0x342624: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x342624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342628:
    // 0x342628: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x342628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_34262c:
    // 0x34262c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34262cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_342630:
    // 0x342630: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x342630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_342634:
    // 0x342634: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x342634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
label_342638:
    // 0x342638: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x342638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_34263c:
    // 0x34263c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x34263cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_342640:
    // 0x342640: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x342640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_342644:
    // 0x342644: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x342644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_342648:
    // 0x342648: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x342648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_34264c:
    // 0x34264c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x34264cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_342650:
    // 0x342650: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x342650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_342654:
    // 0x342654: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x342654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_342658:
    // 0x342658: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x342658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_34265c:
    // 0x34265c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x34265cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_342660:
    // 0x342660: 0xc0cfaee  jal         func_33EBB8
label_342664:
    if (ctx->pc == 0x342664u) {
        ctx->pc = 0x342664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342660u;
        // 0x342664: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342668u;
        goto label_342668;
    }
    ctx->pc = 0x342660u;
    SET_GPR_U32(ctx, 31, 0x342668u);
    ctx->pc = 0x342664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342660u;
    // 0x342664: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBB8u, 0x342660u, 0x342668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342668u;
label_342668:
    // 0x342668: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x342668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34266c:
    // 0x34266c: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
label_342670:
    if (ctx->pc == 0x342670u) {
        ctx->pc = 0x342670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34266Cu;
        // 0x342670: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342674u;
        goto label_342674;
    }
    ctx->pc = 0x34266Cu;
    {
        const bool branch_taken_0x34266c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x342670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34266Cu;
        // 0x342670: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34266c) {
            ctx->pc = 0x3427F8u;
            goto label_3427f8;
        }
    }
    ctx->pc = 0x342674u;
label_342674:
    // 0x342674: 0x3c153e80  lui         $s5, 0x3E80
    ctx->pc = 0x342674u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16000 << 16));
label_342678:
    // 0x342678: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x342678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_34267c:
    // 0x34267c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x34267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_342680:
    // 0x342680: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x342680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_342684:
    // 0x342684: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x342684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_342688:
    // 0x342688: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x342688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_34268c:
    // 0x34268c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x34268cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_342690:
    // 0x342690: 0x12140057  beq         $s0, $s4, . + 4 + (0x57 << 2)
label_342694:
    if (ctx->pc == 0x342694u) {
        ctx->pc = 0x342698u;
        goto label_342698;
    }
    ctx->pc = 0x342690u;
    {
        const bool branch_taken_0x342690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x342690) {
            ctx->pc = 0x3427F0u;
            goto label_3427f0;
        }
    }
    ctx->pc = 0x342698u;
label_342698:
    // 0x342698: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x342698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_34269c:
    // 0x34269c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x34269cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3426a0:
    // 0x3426a0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_3426a4:
    if (ctx->pc == 0x3426A4u) {
        ctx->pc = 0x3426A8u;
        goto label_3426a8;
    }
    ctx->pc = 0x3426A0u;
    {
        const bool branch_taken_0x3426a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3426a0) {
            ctx->pc = 0x3427F0u;
            goto label_3427f0;
        }
    }
    ctx->pc = 0x3426A8u;
label_3426a8:
    // 0x3426a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3426a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3426ac:
    // 0x3426ac: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3426acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3426b0:
    // 0x3426b0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3426b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3426b4:
    // 0x3426b4: 0x40f809  jalr        $v0
label_3426b8:
    if (ctx->pc == 0x3426B8u) {
        ctx->pc = 0x3426B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426B4u;
        // 0x3426b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3426BCu;
        goto label_3426bc;
    }
    ctx->pc = 0x3426B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3426BCu);
        ctx->pc = 0x3426B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426B4u;
        // 0x3426b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3426B4u, 0x3426BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3426BCu;
label_3426bc:
    // 0x3426bc: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3426bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3426c0:
    // 0x3426c0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3426c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_3426c4:
    // 0x3426c4: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
label_3426c8:
    if (ctx->pc == 0x3426C8u) {
        ctx->pc = 0x3426CCu;
        goto label_3426cc;
    }
    ctx->pc = 0x3426C4u;
    {
        const bool branch_taken_0x3426c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3426c4) {
            ctx->pc = 0x3427F0u;
            goto label_3427f0;
        }
    }
    ctx->pc = 0x3426CCu;
label_3426cc:
    // 0x3426cc: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x3426ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_3426d0:
    // 0x3426d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3426d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3426d4:
    // 0x3426d4: 0x8e480034  lw          $t0, 0x34($s2)
    ctx->pc = 0x3426d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3426d8:
    // 0x3426d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3426d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3426dc:
    // 0x3426dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3426dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3426e0:
    // 0x3426e0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3426e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3426e4:
    // 0x3426e4: 0x7fa41840  sq          $a0, 0x1840($sp)
    ctx->pc = 0x3426e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6208), GPR_VEC(ctx, 4));
label_3426e8:
    // 0x3426e8: 0x85030092  lh          $v1, 0x92($t0)
    ctx->pc = 0x3426e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 146)));
label_3426ec:
    // 0x3426ec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3426ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3426f0:
    // 0x3426f0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3426f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3426f4:
    // 0x3426f4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3426f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3426f8:
    // 0x3426f8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3426f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3426fc:
    // 0x3426fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3426fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342700:
    // 0x342700: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x342700u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342704:
    // 0x342704: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x342704u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_342708:
    // 0x342708: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x342708u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_34270c:
    // 0x34270c: 0x7fa41840  sq          $a0, 0x1840($sp)
    ctx->pc = 0x34270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6208), GPR_VEC(ctx, 4));
label_342710:
    // 0x342710: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x342710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_342714:
    // 0x342714: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x342714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342718:
    // 0x342718: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x342718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_34271c:
    // 0x34271c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34271cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342720:
    // 0x342720: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x342720u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_342724:
    // 0x342724: 0x4a0003bf  vwaitq
    ctx->pc = 0x342724u;
    // VWAITQ (Q already resolved in this runtime)
label_342728:
    // 0x342728: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x342728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34272c:
    // 0x34272c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34272cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_342730:
    // 0x342730: 0x7fa31840  sq          $v1, 0x1840($sp)
    ctx->pc = 0x342730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6208), GPR_VEC(ctx, 3));
label_342734:
    // 0x342734: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x342734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_342738:
    // 0x342738: 0x48b51000  qmtc2.ni    $s5, $vf2
    ctx->pc = 0x342738u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
label_34273c:
    // 0x34273c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34273cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_342740:
    // 0x342740: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x342740u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_342744:
    // 0x342744: 0x7fa41850  sq          $a0, 0x1850($sp)
    ctx->pc = 0x342744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6224), GPR_VEC(ctx, 4));
label_342748:
    // 0x342748: 0x7fa61840  sq          $a2, 0x1840($sp)
    ctx->pc = 0x342748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6208), GPR_VEC(ctx, 6));
label_34274c:
    // 0x34274c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x34274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_342750:
    // 0x342750: 0x7fa31850  sq          $v1, 0x1850($sp)
    ctx->pc = 0x342750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6224), GPR_VEC(ctx, 3));
label_342754:
    // 0x342754: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x342754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_342758:
    // 0x342758: 0x8c4700d4  lw          $a3, 0xD4($v0)
    ctx->pc = 0x342758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_34275c:
    // 0x34275c: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x34275cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_342760:
    // 0x342760: 0xe0f809  jalr        $a3
label_342764:
    if (ctx->pc == 0x342764u) {
        ctx->pc = 0x342764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342760u;
        // 0x342764: 0x7fa61850  sq          $a2, 0x1850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 6224), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342768u;
        goto label_342768;
    }
    ctx->pc = 0x342760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x342768u);
        ctx->pc = 0x342764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342760u;
        // 0x342764: 0x7fa61850  sq          $a2, 0x1850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 6224), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342760u, 0x342768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342768u;
label_342768:
    // 0x342768: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x342768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34276c:
    // 0x34276c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x34276cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_342770:
    // 0x342770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x342770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_342774:
    // 0x342774: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x342774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_342778:
    // 0x342778: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x342778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_34277c:
    // 0x34277c: 0x40f809  jalr        $v0
label_342780:
    if (ctx->pc == 0x342780u) {
        ctx->pc = 0x342780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34277Cu;
        // 0x342780: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342784u;
        goto label_342784;
    }
    ctx->pc = 0x34277Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342784u);
        ctx->pc = 0x342780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34277Cu;
        // 0x342780: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34277Cu, 0x342784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342784u;
label_342784:
    // 0x342784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x342784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_342788:
    // 0x342788: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x342788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_34278c:
    // 0x34278c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34278cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_342790:
    // 0x342790: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x342790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_342794:
    // 0x342794: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x342794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_342798:
    // 0x342798: 0x40f809  jalr        $v0
label_34279c:
    if (ctx->pc == 0x34279Cu) {
        ctx->pc = 0x34279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342798u;
        // 0x34279c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427A0u;
        goto label_3427a0;
    }
    ctx->pc = 0x342798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3427A0u);
        ctx->pc = 0x34279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342798u;
        // 0x34279c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342798u, 0x3427A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3427A0u;
label_3427a0:
    // 0x3427a0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3427a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3427a4:
    // 0x3427a4: 0x7ba21840  lq          $v0, 0x1840($sp)
    ctx->pc = 0x3427a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 6208)));
label_3427a8:
    // 0x3427a8: 0x0  nop
    ctx->pc = 0x3427a8u;
    // NOP
label_3427ac:
    // 0x3427ac: 0x0  nop
    ctx->pc = 0x3427acu;
    // NOP
label_3427b0:
    // 0x3427b0: 0x4614ad43  div.s       $f21, $f21, $f20
    ctx->pc = 0x3427b0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_3427b4:
    // 0x3427b4: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x3427b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3427b8:
    // 0x3427b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3427b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3427bc:
    // 0x3427bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3427bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3427c0:
    // 0x3427c0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3427c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3427c4:
    // 0x3427c4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3427c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3427c8:
    // 0x3427c8: 0x7fa21840  sq          $v0, 0x1840($sp)
    ctx->pc = 0x3427c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6208), GPR_VEC(ctx, 2));
label_3427cc:
    // 0x3427cc: 0x7fa21850  sq          $v0, 0x1850($sp)
    ctx->pc = 0x3427ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6224), GPR_VEC(ctx, 2));
label_3427d0:
    // 0x3427d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3427d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3427d4:
    // 0x3427d4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3427d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3427d8:
    // 0x3427d8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3427d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3427dc:
    // 0x3427dc: 0x40f809  jalr        $v0
label_3427e0:
    if (ctx->pc == 0x3427E0u) {
        ctx->pc = 0x3427E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427DCu;
        // 0x3427e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427E4u;
        goto label_3427e4;
    }
    ctx->pc = 0x3427DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3427E4u);
        ctx->pc = 0x3427E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427DCu;
        // 0x3427e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3427DCu, 0x3427E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3427E4u;
label_3427e4:
    // 0x3427e4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x3427e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_3427e8:
    // 0x3427e8: 0xc139a46  jal         func_4E6918
label_3427ec:
    if (ctx->pc == 0x3427ECu) {
        ctx->pc = 0x3427ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427E8u;
        // 0x3427ec: 0x27a51840  addiu       $a1, $sp, 0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427F0u;
        goto label_3427f0;
    }
    ctx->pc = 0x3427E8u;
    SET_GPR_U32(ctx, 31, 0x3427F0u);
    ctx->pc = 0x3427ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427E8u;
    // 0x3427ec: 0x27a51840  addiu       $a1, $sp, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6918u, 0x3427E8u, 0x3427F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427F0u;
label_3427f0:
    // 0x3427f0: 0x1620ffa3  bnez        $s1, . + 4 + (-0x5D << 2)
label_3427f4:
    if (ctx->pc == 0x3427F4u) {
        ctx->pc = 0x3427F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427F0u;
        // 0x3427f4: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427F8u;
        goto label_3427f8;
    }
    ctx->pc = 0x3427F0u;
    {
        const bool branch_taken_0x3427f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3427F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427F0u;
        // 0x3427f4: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3427f0) {
            ctx->pc = 0x342680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342680;
        }
    }
    ctx->pc = 0x3427F8u;
label_3427f8:
    // 0x3427f8: 0x7bb018d0  lq          $s0, 0x18D0($sp)
    ctx->pc = 0x3427f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 6352)));
label_3427fc:
    // 0x3427fc: 0x7bb118c0  lq          $s1, 0x18C0($sp)
    ctx->pc = 0x3427fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 6336)));
label_342800:
    // 0x342800: 0x7bb218b0  lq          $s2, 0x18B0($sp)
    ctx->pc = 0x342800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 6320)));
label_342804:
    // 0x342804: 0x7bb318a0  lq          $s3, 0x18A0($sp)
    ctx->pc = 0x342804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 6304)));
label_342808:
    // 0x342808: 0x7bb41890  lq          $s4, 0x1890($sp)
    ctx->pc = 0x342808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 6288)));
label_34280c:
    // 0x34280c: 0x7bb51880  lq          $s5, 0x1880($sp)
    ctx->pc = 0x34280cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 6272)));
label_342810:
    // 0x342810: 0x7bb61870  lq          $s6, 0x1870($sp)
    ctx->pc = 0x342810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 6256)));
label_342814:
    // 0x342814: 0xdfbf1860  ld          $ra, 0x1860($sp)
    ctx->pc = 0x342814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 6240)));
label_342818:
    // 0x342818: 0xc7b518e8  lwc1        $f21, 0x18E8($sp)
    ctx->pc = 0x342818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 6376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_34281c:
    // 0x34281c: 0xc7b418e0  lwc1        $f20, 0x18E0($sp)
    ctx->pc = 0x34281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 6368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_342820:
    // 0x342820: 0x3e00008  jr          $ra
label_342824:
    if (ctx->pc == 0x342824u) {
        ctx->pc = 0x342824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342820u;
        // 0x342824: 0x27bd18f0  addiu       $sp, $sp, 0x18F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342828u;
        goto label_fallthrough_0x342820;
    }
    ctx->pc = 0x342820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342820u;
        // 0x342824: 0x27bd18f0  addiu       $sp, $sp, 0x18F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x342820:
    ctx->pc = 0x342828u;
}
