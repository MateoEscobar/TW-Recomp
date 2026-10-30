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

// Function: sub_00175610
// Address: 0x175610 - 0x175840
void sub_00175610_0x175610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175610_0x175610");
#endif

    switch (ctx->pc) {
        case 0x175610u: goto label_175610;
        case 0x175614u: goto label_175614;
        case 0x175618u: goto label_175618;
        case 0x17561cu: goto label_17561c;
        case 0x175620u: goto label_175620;
        case 0x175624u: goto label_175624;
        case 0x175628u: goto label_175628;
        case 0x17562cu: goto label_17562c;
        case 0x175630u: goto label_175630;
        case 0x175634u: goto label_175634;
        case 0x175638u: goto label_175638;
        case 0x17563cu: goto label_17563c;
        case 0x175640u: goto label_175640;
        case 0x175644u: goto label_175644;
        case 0x175648u: goto label_175648;
        case 0x17564cu: goto label_17564c;
        case 0x175650u: goto label_175650;
        case 0x175654u: goto label_175654;
        case 0x175658u: goto label_175658;
        case 0x17565cu: goto label_17565c;
        case 0x175660u: goto label_175660;
        case 0x175664u: goto label_175664;
        case 0x175668u: goto label_175668;
        case 0x17566cu: goto label_17566c;
        case 0x175670u: goto label_175670;
        case 0x175674u: goto label_175674;
        case 0x175678u: goto label_175678;
        case 0x17567cu: goto label_17567c;
        case 0x175680u: goto label_175680;
        case 0x175684u: goto label_175684;
        case 0x175688u: goto label_175688;
        case 0x17568cu: goto label_17568c;
        case 0x175690u: goto label_175690;
        case 0x175694u: goto label_175694;
        case 0x175698u: goto label_175698;
        case 0x17569cu: goto label_17569c;
        case 0x1756a0u: goto label_1756a0;
        case 0x1756a4u: goto label_1756a4;
        case 0x1756a8u: goto label_1756a8;
        case 0x1756acu: goto label_1756ac;
        case 0x1756b0u: goto label_1756b0;
        case 0x1756b4u: goto label_1756b4;
        case 0x1756b8u: goto label_1756b8;
        case 0x1756bcu: goto label_1756bc;
        case 0x1756c0u: goto label_1756c0;
        case 0x1756c4u: goto label_1756c4;
        case 0x1756c8u: goto label_1756c8;
        case 0x1756ccu: goto label_1756cc;
        case 0x1756d0u: goto label_1756d0;
        case 0x1756d4u: goto label_1756d4;
        case 0x1756d8u: goto label_1756d8;
        case 0x1756dcu: goto label_1756dc;
        case 0x1756e0u: goto label_1756e0;
        case 0x1756e4u: goto label_1756e4;
        case 0x1756e8u: goto label_1756e8;
        case 0x1756ecu: goto label_1756ec;
        case 0x1756f0u: goto label_1756f0;
        case 0x1756f4u: goto label_1756f4;
        case 0x1756f8u: goto label_1756f8;
        case 0x1756fcu: goto label_1756fc;
        case 0x175700u: goto label_175700;
        case 0x175704u: goto label_175704;
        case 0x175708u: goto label_175708;
        case 0x17570cu: goto label_17570c;
        case 0x175710u: goto label_175710;
        case 0x175714u: goto label_175714;
        case 0x175718u: goto label_175718;
        case 0x17571cu: goto label_17571c;
        case 0x175720u: goto label_175720;
        case 0x175724u: goto label_175724;
        case 0x175728u: goto label_175728;
        case 0x17572cu: goto label_17572c;
        case 0x175730u: goto label_175730;
        case 0x175734u: goto label_175734;
        case 0x175738u: goto label_175738;
        case 0x17573cu: goto label_17573c;
        case 0x175740u: goto label_175740;
        case 0x175744u: goto label_175744;
        case 0x175748u: goto label_175748;
        case 0x17574cu: goto label_17574c;
        case 0x175750u: goto label_175750;
        case 0x175754u: goto label_175754;
        case 0x175758u: goto label_175758;
        case 0x17575cu: goto label_17575c;
        case 0x175760u: goto label_175760;
        case 0x175764u: goto label_175764;
        case 0x175768u: goto label_175768;
        case 0x17576cu: goto label_17576c;
        case 0x175770u: goto label_175770;
        case 0x175774u: goto label_175774;
        case 0x175778u: goto label_175778;
        case 0x17577cu: goto label_17577c;
        case 0x175780u: goto label_175780;
        case 0x175784u: goto label_175784;
        case 0x175788u: goto label_175788;
        case 0x17578cu: goto label_17578c;
        case 0x175790u: goto label_175790;
        case 0x175794u: goto label_175794;
        case 0x175798u: goto label_175798;
        case 0x17579cu: goto label_17579c;
        case 0x1757a0u: goto label_1757a0;
        case 0x1757a4u: goto label_1757a4;
        case 0x1757a8u: goto label_1757a8;
        case 0x1757acu: goto label_1757ac;
        case 0x1757b0u: goto label_1757b0;
        case 0x1757b4u: goto label_1757b4;
        case 0x1757b8u: goto label_1757b8;
        case 0x1757bcu: goto label_1757bc;
        case 0x1757c0u: goto label_1757c0;
        case 0x1757c4u: goto label_1757c4;
        case 0x1757c8u: goto label_1757c8;
        case 0x1757ccu: goto label_1757cc;
        case 0x1757d0u: goto label_1757d0;
        case 0x1757d4u: goto label_1757d4;
        case 0x1757d8u: goto label_1757d8;
        case 0x1757dcu: goto label_1757dc;
        case 0x1757e0u: goto label_1757e0;
        case 0x1757e4u: goto label_1757e4;
        case 0x1757e8u: goto label_1757e8;
        case 0x1757ecu: goto label_1757ec;
        case 0x1757f0u: goto label_1757f0;
        case 0x1757f4u: goto label_1757f4;
        case 0x1757f8u: goto label_1757f8;
        case 0x1757fcu: goto label_1757fc;
        case 0x175800u: goto label_175800;
        case 0x175804u: goto label_175804;
        case 0x175808u: goto label_175808;
        case 0x17580cu: goto label_17580c;
        case 0x175810u: goto label_175810;
        case 0x175814u: goto label_175814;
        case 0x175818u: goto label_175818;
        case 0x17581cu: goto label_17581c;
        case 0x175820u: goto label_175820;
        case 0x175824u: goto label_175824;
        case 0x175828u: goto label_175828;
        case 0x17582cu: goto label_17582c;
        case 0x175830u: goto label_175830;
        case 0x175834u: goto label_175834;
        case 0x175838u: goto label_175838;
        case 0x17583cu: goto label_17583c;
        default: break;
    }

    ctx->pc = 0x175610u;

label_175610:
    // 0x175610: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x175610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_175614:
    // 0x175614: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x175614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_175618:
    // 0x175618: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x175618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_17561c:
    // 0x17561c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17561cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175620:
    // 0x175620: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x175620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_175624:
    // 0x175624: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x175624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_175628:
    // 0x175628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17562c:
    // 0x17562c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17562cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_175630:
    // 0x175630: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x175630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_175634:
    // 0x175634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_175638:
    // 0x175638: 0x964202b2  lhu         $v0, 0x2B2($s2)
    ctx->pc = 0x175638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
label_17563c:
    // 0x17563c: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_175640:
    if (ctx->pc == 0x175640u) {
        ctx->pc = 0x175640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17563Cu;
        // 0x175640: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175644u;
        goto label_175644;
    }
    ctx->pc = 0x17563Cu;
    {
        const bool branch_taken_0x17563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17563Cu;
        // 0x175640: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17563c) {
            ctx->pc = 0x175818u;
            goto label_175818;
        }
    }
    ctx->pc = 0x175644u;
label_175644:
    // 0x175644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175648:
    // 0x175648: 0xa64202b2  sh          $v0, 0x2B2($s2)
    ctx->pc = 0x175648u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 2));
label_17564c:
    // 0x17564c: 0xc05d610  jal         func_175840
label_175650:
    if (ctx->pc == 0x175650u) {
        ctx->pc = 0x175650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17564Cu;
        // 0x175650: 0x265502bc  addiu       $s5, $s2, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 700));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175654u;
        goto label_175654;
    }
    ctx->pc = 0x17564Cu;
    SET_GPR_U32(ctx, 31, 0x175654u);
    ctx->pc = 0x175650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17564Cu;
    // 0x175650: 0x265502bc  addiu       $s5, $s2, 0x2BC (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x17564Cu, 0x175654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175654u;
label_175654:
    // 0x175654: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x175654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175658:
    // 0x175658: 0x1260002d  beqz        $s3, . + 4 + (0x2D << 2)
label_17565c:
    if (ctx->pc == 0x17565Cu) {
        ctx->pc = 0x17565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175658u;
        // 0x17565c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175660u;
        goto label_175660;
    }
    ctx->pc = 0x175658u;
    {
        const bool branch_taken_0x175658 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175658u;
        // 0x17565c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175658) {
            ctx->pc = 0x175710u;
            goto label_175710;
        }
    }
    ctx->pc = 0x175660u;
label_175660:
    // 0x175660: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_175664:
    if (ctx->pc == 0x175664u) {
        ctx->pc = 0x175664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175660u;
        // 0x175664: 0x26540304  addiu       $s4, $s2, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 772));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175668u;
        goto label_175668;
    }
    ctx->pc = 0x175660u;
    {
        const bool branch_taken_0x175660 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x175664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175660u;
        // 0x175664: 0x26540304  addiu       $s4, $s2, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175660) {
            ctx->pc = 0x17569Cu;
            goto label_17569c;
        }
    }
    ctx->pc = 0x175668u;
label_175668:
    // 0x175668: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x175668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17566c:
    // 0x17566c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17566cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_175670:
    // 0x175670: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x175670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_175674:
    // 0x175674: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_175678:
    // 0x175678: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x175678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17567c:
    // 0x17567c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_175680:
    // 0x175680: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x175680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_175684:
    // 0x175684: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x175684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_175688:
    // 0x175688: 0x60f809  jalr        $v1
label_17568c:
    if (ctx->pc == 0x17568Cu) {
        ctx->pc = 0x17568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175688u;
        // 0x17568c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175690u;
        goto label_175690;
    }
    ctx->pc = 0x175688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x175690u);
        ctx->pc = 0x17568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175688u;
        // 0x17568c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175688u, 0x175690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175690u;
label_175690:
    // 0x175690: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x175690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_175694:
    // 0x175694: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_175698:
    if (ctx->pc == 0x175698u) {
        ctx->pc = 0x175698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175694u;
        // 0x175698: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17569Cu;
        goto label_17569c;
    }
    ctx->pc = 0x175694u;
    {
        const bool branch_taken_0x175694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175694) {
            ctx->pc = 0x175698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175694u;
            // 0x175698: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175670;
        }
    }
    ctx->pc = 0x17569Cu;
label_17569c:
    // 0x17569c: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x17569cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1756a0:
    // 0x1756a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1756a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1756a4:
    // 0x1756a4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1756a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1756a8:
    // 0x1756a8: 0xc05d610  jal         func_175840
label_1756ac:
    if (ctx->pc == 0x1756ACu) {
        ctx->pc = 0x1756ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756A8u;
        // 0x1756ac: 0x26100304  addiu       $s0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1756B0u;
        goto label_1756b0;
    }
    ctx->pc = 0x1756A8u;
    SET_GPR_U32(ctx, 31, 0x1756B0u);
    ctx->pc = 0x1756ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756A8u;
    // 0x1756ac: 0x26100304  addiu       $s0, $s0, 0x304 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x1756A8u, 0x1756B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756B0u;
label_1756b0:
    // 0x1756b0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1756b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1756b4:
    // 0x1756b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1756b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1756b8:
    // 0x1756b8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1756b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1756bc:
    // 0x1756bc: 0xc10c190  jal         func_430640
label_1756c0:
    if (ctx->pc == 0x1756C0u) {
        ctx->pc = 0x1756C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756BCu;
        // 0x1756c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1756C4u;
        goto label_1756c4;
    }
    ctx->pc = 0x1756BCu;
    SET_GPR_U32(ctx, 31, 0x1756C4u);
    ctx->pc = 0x1756C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756BCu;
    // 0x1756c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x1756BCu, 0x1756C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756C4u;
label_1756c4:
    // 0x1756c4: 0xc05d610  jal         func_175840
label_1756c8:
    if (ctx->pc == 0x1756C8u) {
        ctx->pc = 0x1756C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756C4u;
        // 0x1756c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1756CCu;
        goto label_1756cc;
    }
    ctx->pc = 0x1756C4u;
    SET_GPR_U32(ctx, 31, 0x1756CCu);
    ctx->pc = 0x1756C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756C4u;
    // 0x1756c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x1756C4u, 0x1756CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756CCu;
label_1756cc:
    // 0x1756cc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1756ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1756d0:
    // 0x1756d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1756d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1756d4:
    // 0x1756d4: 0xc05d612  jal         func_175848
label_1756d8:
    if (ctx->pc == 0x1756D8u) {
        ctx->pc = 0x1756D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756D4u;
        // 0x1756d8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1756DCu;
        goto label_1756dc;
    }
    ctx->pc = 0x1756D4u;
    SET_GPR_U32(ctx, 31, 0x1756DCu);
    ctx->pc = 0x1756D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756D4u;
    // 0x1756d8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175848u, 0x1756D4u, 0x1756DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756DCu;
label_1756dc:
    // 0x1756dc: 0xc05d610  jal         func_175840
label_1756e0:
    if (ctx->pc == 0x1756E0u) {
        ctx->pc = 0x1756E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756DCu;
        // 0x1756e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1756E4u;
        goto label_1756e4;
    }
    ctx->pc = 0x1756DCu;
    SET_GPR_U32(ctx, 31, 0x1756E4u);
    ctx->pc = 0x1756E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756DCu;
    // 0x1756e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x1756DCu, 0x1756E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756E4u;
label_1756e4:
    // 0x1756e4: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x1756e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1756e8:
    // 0x1756e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1756e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1756ec:
    // 0x1756ec: 0x26100304  addiu       $s0, $s0, 0x304
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
label_1756f0:
    // 0x1756f0: 0xc05d610  jal         func_175840
label_1756f4:
    if (ctx->pc == 0x1756F4u) {
        ctx->pc = 0x1756F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756F0u;
        // 0x1756f4: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1756F8u;
        goto label_1756f8;
    }
    ctx->pc = 0x1756F0u;
    SET_GPR_U32(ctx, 31, 0x1756F8u);
    ctx->pc = 0x1756F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756F0u;
    // 0x1756f4: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x1756F0u, 0x1756F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756F8u;
label_1756f8:
    // 0x1756f8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1756f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1756fc:
    // 0x1756fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1756fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175700:
    // 0x175700: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_175704:
    // 0x175704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175708:
    // 0x175708: 0xc10c1fa  jal         func_4307E8
label_17570c:
    if (ctx->pc == 0x17570Cu) {
        ctx->pc = 0x17570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175708u;
        // 0x17570c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175710u;
        goto label_175710;
    }
    ctx->pc = 0x175708u;
    SET_GPR_U32(ctx, 31, 0x175710u);
    ctx->pc = 0x17570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175708u;
    // 0x17570c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x175708u, 0x175710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175710u;
label_175710:
    // 0x175710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_175714:
    // 0x175714: 0xc05d45e  jal         func_175178
label_175718:
    if (ctx->pc == 0x175718u) {
        ctx->pc = 0x175718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175714u;
        // 0x175718: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17571Cu;
        goto label_17571c;
    }
    ctx->pc = 0x175714u;
    SET_GPR_U32(ctx, 31, 0x17571Cu);
    ctx->pc = 0x175718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175714u;
    // 0x175718: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x175714u, 0x17571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17571Cu;
label_17571c:
    // 0x17571c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17571cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175720:
    // 0x175720: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_175724:
    if (ctx->pc == 0x175724u) {
        ctx->pc = 0x175724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175720u;
        // 0x175724: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175728u;
        goto label_175728;
    }
    ctx->pc = 0x175720u;
    {
        const bool branch_taken_0x175720 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x175724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175720u;
        // 0x175724: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175720) {
            ctx->pc = 0x17575Cu;
            goto label_17575c;
        }
    }
    ctx->pc = 0x175728u;
label_175728:
    // 0x175728: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x175728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17572c:
    // 0x17572c: 0x0  nop
    ctx->pc = 0x17572cu;
    // NOP
label_175730:
    // 0x175730: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x175730u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_175734:
    // 0x175734: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_175738:
    // 0x175738: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x175738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17573c:
    // 0x17573c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_175740:
    // 0x175740: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x175740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_175744:
    // 0x175744: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_175748:
    // 0x175748: 0x60f809  jalr        $v1
label_17574c:
    if (ctx->pc == 0x17574Cu) {
        ctx->pc = 0x17574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175748u;
        // 0x17574c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175750u;
        goto label_175750;
    }
    ctx->pc = 0x175748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x175750u);
        ctx->pc = 0x17574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175748u;
        // 0x17574c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175748u, 0x175750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175750u;
label_175750:
    // 0x175750: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x175750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_175754:
    // 0x175754: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_175758:
    if (ctx->pc == 0x175758u) {
        ctx->pc = 0x175758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175754u;
        // 0x175758: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17575Cu;
        goto label_17575c;
    }
    ctx->pc = 0x175754u;
    {
        const bool branch_taken_0x175754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175754) {
            ctx->pc = 0x175758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175754u;
            // 0x175758: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175730;
        }
    }
    ctx->pc = 0x17575Cu;
label_17575c:
    // 0x17575c: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_175760:
    // 0x175760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_175764:
    // 0x175764: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x175764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_175768:
    // 0x175768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x175768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17576c:
    // 0x17576c: 0xc05d45e  jal         func_175178
label_175770:
    if (ctx->pc == 0x175770u) {
        ctx->pc = 0x175770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17576Cu;
        // 0x175770: 0x261002bc  addiu       $s0, $s0, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175774u;
        goto label_175774;
    }
    ctx->pc = 0x17576Cu;
    SET_GPR_U32(ctx, 31, 0x175774u);
    ctx->pc = 0x175770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17576Cu;
    // 0x175770: 0x261002bc  addiu       $s0, $s0, 0x2BC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x17576Cu, 0x175774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175774u;
label_175774:
    // 0x175774: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x175774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_175778:
    // 0x175778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17577c:
    // 0x17577c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x17577cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_175780:
    // 0x175780: 0xc10c190  jal         func_430640
label_175784:
    if (ctx->pc == 0x175784u) {
        ctx->pc = 0x175784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175780u;
        // 0x175784: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175788u;
        goto label_175788;
    }
    ctx->pc = 0x175780u;
    SET_GPR_U32(ctx, 31, 0x175788u);
    ctx->pc = 0x175784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175780u;
    // 0x175784: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x175780u, 0x175788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175788u;
label_175788:
    // 0x175788: 0xc05d45e  jal         func_175178
label_17578c:
    if (ctx->pc == 0x17578Cu) {
        ctx->pc = 0x17578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175788u;
        // 0x17578c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175790u;
        goto label_175790;
    }
    ctx->pc = 0x175788u;
    SET_GPR_U32(ctx, 31, 0x175790u);
    ctx->pc = 0x17578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175788u;
    // 0x17578c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x175788u, 0x175790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175790u;
label_175790:
    // 0x175790: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x175790u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_175794:
    // 0x175794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_175798:
    // 0x175798: 0xc05d460  jal         func_175180
label_17579c:
    if (ctx->pc == 0x17579Cu) {
        ctx->pc = 0x17579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175798u;
        // 0x17579c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1757A0u;
        goto label_1757a0;
    }
    ctx->pc = 0x175798u;
    SET_GPR_U32(ctx, 31, 0x1757A0u);
    ctx->pc = 0x17579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175798u;
    // 0x17579c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175180u, 0x175798u, 0x1757A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757A0u;
label_1757a0:
    // 0x1757a0: 0xc05d45e  jal         func_175178
label_1757a4:
    if (ctx->pc == 0x1757A4u) {
        ctx->pc = 0x1757A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757A0u;
        // 0x1757a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1757A8u;
        goto label_1757a8;
    }
    ctx->pc = 0x1757A0u;
    SET_GPR_U32(ctx, 31, 0x1757A8u);
    ctx->pc = 0x1757A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757A0u;
    // 0x1757a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x1757A0u, 0x1757A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757A8u;
label_1757a8:
    // 0x1757a8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x1757a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1757ac:
    // 0x1757ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1757acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1757b0:
    // 0x1757b0: 0x261002bc  addiu       $s0, $s0, 0x2BC
    ctx->pc = 0x1757b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
label_1757b4:
    // 0x1757b4: 0xc05d45e  jal         func_175178
label_1757b8:
    if (ctx->pc == 0x1757B8u) {
        ctx->pc = 0x1757B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757B4u;
        // 0x1757b8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1757BCu;
        goto label_1757bc;
    }
    ctx->pc = 0x1757B4u;
    SET_GPR_U32(ctx, 31, 0x1757BCu);
    ctx->pc = 0x1757B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757B4u;
    // 0x1757b8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x1757B4u, 0x1757BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757BCu;
label_1757bc:
    // 0x1757bc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1757bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1757c0:
    // 0x1757c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1757c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1757c4:
    // 0x1757c4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1757c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1757c8:
    // 0x1757c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1757c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1757cc:
    // 0x1757cc: 0xc10c1fa  jal         func_4307E8
label_1757d0:
    if (ctx->pc == 0x1757D0u) {
        ctx->pc = 0x1757D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757CCu;
        // 0x1757d0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1757D4u;
        goto label_1757d4;
    }
    ctx->pc = 0x1757CCu;
    SET_GPR_U32(ctx, 31, 0x1757D4u);
    ctx->pc = 0x1757D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757CCu;
    // 0x1757d0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1757CCu, 0x1757D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757D4u;
label_1757d4:
    // 0x1757d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1757d8:
    if (ctx->pc == 0x1757D8u) {
        ctx->pc = 0x1757DCu;
        goto label_1757dc;
    }
    ctx->pc = 0x1757D4u;
    {
        const bool branch_taken_0x1757d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757d4) {
            ctx->pc = 0x175800u;
            goto label_175800;
        }
    }
    ctx->pc = 0x1757DCu;
label_1757dc:
    // 0x1757dc: 0x0  nop
    ctx->pc = 0x1757dcu;
    // NOP
label_1757e0:
    // 0x1757e0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1757e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1757e4:
    // 0x1757e4: 0x0  nop
    ctx->pc = 0x1757e4u;
    // NOP
label_1757e8:
    // 0x1757e8: 0xc05d45e  jal         func_175178
label_1757ec:
    if (ctx->pc == 0x1757ECu) {
        ctx->pc = 0x1757ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757E8u;
        // 0x1757ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1757F0u;
        goto label_1757f0;
    }
    ctx->pc = 0x1757E8u;
    SET_GPR_U32(ctx, 31, 0x1757F0u);
    ctx->pc = 0x1757ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757E8u;
    // 0x1757ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x1757E8u, 0x1757F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757F0u;
label_1757f0:
    // 0x1757f0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1757f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1757f4:
    // 0x1757f4: 0x0  nop
    ctx->pc = 0x1757f4u;
    // NOP
label_1757f8:
    // 0x1757f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1757fc:
    if (ctx->pc == 0x1757FCu) {
        ctx->pc = 0x1757FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757F8u;
        // 0x1757fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175800u;
        goto label_175800;
    }
    ctx->pc = 0x1757F8u;
    {
        const bool branch_taken_0x1757f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1757FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757F8u;
        // 0x1757fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757f8) {
            ctx->pc = 0x1757E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1757e8;
        }
    }
    ctx->pc = 0x175800u;
label_175800:
    // 0x175800: 0xc05d45e  jal         func_175178
label_175804:
    if (ctx->pc == 0x175804u) {
        ctx->pc = 0x175804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175800u;
        // 0x175804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175808u;
        goto label_175808;
    }
    ctx->pc = 0x175800u;
    SET_GPR_U32(ctx, 31, 0x175808u);
    ctx->pc = 0x175804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175800u;
    // 0x175804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x175800u, 0x175808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175808u;
label_175808:
    // 0x175808: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x175808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17580c:
    // 0x17580c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_175810:
    if (ctx->pc == 0x175810u) {
        ctx->pc = 0x175810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17580Cu;
        // 0x175810: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175814u;
        goto label_175814;
    }
    ctx->pc = 0x17580Cu;
    {
        const bool branch_taken_0x17580c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17580Cu;
        // 0x175810: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17580c) {
            ctx->pc = 0x1757E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1757e0;
        }
    }
    ctx->pc = 0x175814u;
label_175814:
    // 0x175814: 0xa64002b2  sh          $zero, 0x2B2($s2)
    ctx->pc = 0x175814u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 0));
label_175818:
    // 0x175818: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x175818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17581c:
    // 0x17581c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17581cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_175820:
    // 0x175820: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x175820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_175824:
    // 0x175824: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175828:
    // 0x175828: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x175828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17582c:
    // 0x17582c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x17582cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175830:
    // 0x175830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175834:
    // 0x175834: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x175834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_175838:
    // 0x175838: 0x3e00008  jr          $ra
label_17583c:
    if (ctx->pc == 0x17583Cu) {
        ctx->pc = 0x17583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175838u;
        // 0x17583c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175840u;
        goto label_fallthrough_0x175838;
    }
    ctx->pc = 0x175838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175838u;
        // 0x17583c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x175838:
    ctx->pc = 0x175840u;
}
