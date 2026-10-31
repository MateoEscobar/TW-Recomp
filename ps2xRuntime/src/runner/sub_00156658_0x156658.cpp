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

// Function: sub_00156658
// Address: 0x156658 - 0x1567f8
void sub_00156658_0x156658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156658_0x156658");
#endif

    switch (ctx->pc) {
        case 0x156658u: goto label_156658;
        case 0x15665cu: goto label_15665c;
        case 0x156660u: goto label_156660;
        case 0x156664u: goto label_156664;
        case 0x156668u: goto label_156668;
        case 0x15666cu: goto label_15666c;
        case 0x156670u: goto label_156670;
        case 0x156674u: goto label_156674;
        case 0x156678u: goto label_156678;
        case 0x15667cu: goto label_15667c;
        case 0x156680u: goto label_156680;
        case 0x156684u: goto label_156684;
        case 0x156688u: goto label_156688;
        case 0x15668cu: goto label_15668c;
        case 0x156690u: goto label_156690;
        case 0x156694u: goto label_156694;
        case 0x156698u: goto label_156698;
        case 0x15669cu: goto label_15669c;
        case 0x1566a0u: goto label_1566a0;
        case 0x1566a4u: goto label_1566a4;
        case 0x1566a8u: goto label_1566a8;
        case 0x1566acu: goto label_1566ac;
        case 0x1566b0u: goto label_1566b0;
        case 0x1566b4u: goto label_1566b4;
        case 0x1566b8u: goto label_1566b8;
        case 0x1566bcu: goto label_1566bc;
        case 0x1566c0u: goto label_1566c0;
        case 0x1566c4u: goto label_1566c4;
        case 0x1566c8u: goto label_1566c8;
        case 0x1566ccu: goto label_1566cc;
        case 0x1566d0u: goto label_1566d0;
        case 0x1566d4u: goto label_1566d4;
        case 0x1566d8u: goto label_1566d8;
        case 0x1566dcu: goto label_1566dc;
        case 0x1566e0u: goto label_1566e0;
        case 0x1566e4u: goto label_1566e4;
        case 0x1566e8u: goto label_1566e8;
        case 0x1566ecu: goto label_1566ec;
        case 0x1566f0u: goto label_1566f0;
        case 0x1566f4u: goto label_1566f4;
        case 0x1566f8u: goto label_1566f8;
        case 0x1566fcu: goto label_1566fc;
        case 0x156700u: goto label_156700;
        case 0x156704u: goto label_156704;
        case 0x156708u: goto label_156708;
        case 0x15670cu: goto label_15670c;
        case 0x156710u: goto label_156710;
        case 0x156714u: goto label_156714;
        case 0x156718u: goto label_156718;
        case 0x15671cu: goto label_15671c;
        case 0x156720u: goto label_156720;
        case 0x156724u: goto label_156724;
        case 0x156728u: goto label_156728;
        case 0x15672cu: goto label_15672c;
        case 0x156730u: goto label_156730;
        case 0x156734u: goto label_156734;
        case 0x156738u: goto label_156738;
        case 0x15673cu: goto label_15673c;
        case 0x156740u: goto label_156740;
        case 0x156744u: goto label_156744;
        case 0x156748u: goto label_156748;
        case 0x15674cu: goto label_15674c;
        case 0x156750u: goto label_156750;
        case 0x156754u: goto label_156754;
        case 0x156758u: goto label_156758;
        case 0x15675cu: goto label_15675c;
        case 0x156760u: goto label_156760;
        case 0x156764u: goto label_156764;
        case 0x156768u: goto label_156768;
        case 0x15676cu: goto label_15676c;
        case 0x156770u: goto label_156770;
        case 0x156774u: goto label_156774;
        case 0x156778u: goto label_156778;
        case 0x15677cu: goto label_15677c;
        case 0x156780u: goto label_156780;
        case 0x156784u: goto label_156784;
        case 0x156788u: goto label_156788;
        case 0x15678cu: goto label_15678c;
        case 0x156790u: goto label_156790;
        case 0x156794u: goto label_156794;
        case 0x156798u: goto label_156798;
        case 0x15679cu: goto label_15679c;
        case 0x1567a0u: goto label_1567a0;
        case 0x1567a4u: goto label_1567a4;
        case 0x1567a8u: goto label_1567a8;
        case 0x1567acu: goto label_1567ac;
        case 0x1567b0u: goto label_1567b0;
        case 0x1567b4u: goto label_1567b4;
        case 0x1567b8u: goto label_1567b8;
        case 0x1567bcu: goto label_1567bc;
        case 0x1567c0u: goto label_1567c0;
        case 0x1567c4u: goto label_1567c4;
        case 0x1567c8u: goto label_1567c8;
        case 0x1567ccu: goto label_1567cc;
        case 0x1567d0u: goto label_1567d0;
        case 0x1567d4u: goto label_1567d4;
        case 0x1567d8u: goto label_1567d8;
        case 0x1567dcu: goto label_1567dc;
        case 0x1567e0u: goto label_1567e0;
        case 0x1567e4u: goto label_1567e4;
        case 0x1567e8u: goto label_1567e8;
        case 0x1567ecu: goto label_1567ec;
        case 0x1567f0u: goto label_1567f0;
        case 0x1567f4u: goto label_1567f4;
        default: break;
    }

    ctx->pc = 0x156658u;

label_156658:
    // 0x156658: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x156658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_15665c:
    // 0x15665c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_156660:
    // 0x156660: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x156660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_156664:
    // 0x156664: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x156664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_156668:
    // 0x156668: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x156668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_15666c:
    // 0x15666c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15666cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156670:
    // 0x156670: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x156670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_156674:
    // 0x156674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156678:
    // 0x156678: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x156678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15667c:
    // 0x15667c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_156680:
    // 0x156680: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x156680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_156684:
    // 0x156684: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x156684u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_156688:
    // 0x156688: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x156688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_15668c:
    // 0x15668c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x15668cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_156690:
    // 0x156690: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x156690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_156694:
    // 0x156694: 0x3c150062  lui         $s5, 0x62
    ctx->pc = 0x156694u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
label_156698:
    // 0x156698: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x156698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_15669c:
    // 0x15669c: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x15669cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
label_1566a0:
    // 0x1566a0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1566a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1566a4:
    // 0x1566a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1566a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1566a8:
    // 0x1566a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1566a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1566ac:
    // 0x1566ac: 0x8c62deb8  lw          $v0, -0x2148($v1)
    ctx->pc = 0x1566acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958776)));
label_1566b0:
    // 0x1566b0: 0x8c830268  lw          $v1, 0x268($a0)
    ctx->pc = 0x1566b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
label_1566b4:
    // 0x1566b4: 0x8c4401f8  lw          $a0, 0x1F8($v0)
    ctx->pc = 0x1566b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
label_1566b8:
    // 0x1566b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1566bc:
    if (ctx->pc == 0x1566BCu) {
        ctx->pc = 0x1566BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566B8u;
        // 0x1566bc: 0x3902a  slt         $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566C0u;
        goto label_1566c0;
    }
    ctx->pc = 0x1566B8u;
    {
        const bool branch_taken_0x1566b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566B8u;
        // 0x1566bc: 0x3902a  slt         $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566b8) {
            ctx->pc = 0x1566DCu;
            goto label_1566dc;
        }
    }
    ctx->pc = 0x1566C0u;
label_1566c0:
    // 0x1566c0: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1566c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1566c4:
    // 0x1566c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1566c8:
    if (ctx->pc == 0x1566C8u) {
        ctx->pc = 0x1566C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C4u;
        // 0x1566c8: 0x2684deb8  addiu       $a0, $s4, -0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566CCu;
        goto label_1566cc;
    }
    ctx->pc = 0x1566C4u;
    {
        const bool branch_taken_0x1566c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C4u;
        // 0x1566c8: 0x2684deb8  addiu       $a0, $s4, -0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566c4) {
            ctx->pc = 0x1566E8u;
            goto label_1566e8;
        }
    }
    ctx->pc = 0x1566CCu;
label_1566cc:
    // 0x1566cc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1566ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1566d0:
    // 0x1566d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1566d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1566d4:
    // 0x1566d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1566d8:
    // 0x1566d8: 0x8c6401f8  lw          $a0, 0x1F8($v1)
    ctx->pc = 0x1566d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
label_1566dc:
    // 0x1566dc: 0x5080fff8  beql        $a0, $zero, . + 4 + (-0x8 << 2)
label_1566e0:
    if (ctx->pc == 0x1566E0u) {
        ctx->pc = 0x1566E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566DCu;
        // 0x1566e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566E4u;
        goto label_1566e4;
    }
    ctx->pc = 0x1566DCu;
    {
        const bool branch_taken_0x1566dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1566dc) {
            ctx->pc = 0x1566E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1566DCu;
            // 0x1566e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1566C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1566c0;
        }
    }
    ctx->pc = 0x1566E4u;
label_1566e4:
    // 0x1566e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1566e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1566e8:
    // 0x1566e8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_1566ec:
    if (ctx->pc == 0x1566ECu) {
        ctx->pc = 0x1566ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566E8u;
        // 0x1566ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566F0u;
        goto label_1566f0;
    }
    ctx->pc = 0x1566E8u;
    {
        const bool branch_taken_0x1566e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1566ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566E8u;
        // 0x1566ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566e8) {
            ctx->pc = 0x1566F8u;
            goto label_1566f8;
        }
    }
    ctx->pc = 0x1566F0u;
label_1566f0:
    // 0x1566f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1566f4:
    if (ctx->pc == 0x1566F4u) {
        ctx->pc = 0x1566F8u;
        goto label_1566f8;
    }
    ctx->pc = 0x1566F0u;
    {
        const bool branch_taken_0x1566f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1566f0) {
            ctx->pc = 0x156714u;
            goto label_156714;
        }
    }
    ctx->pc = 0x1566F8u;
label_1566f8:
    // 0x1566f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1566f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1566fc:
    // 0x1566fc: 0x8c65cdb4  lw          $a1, -0x324C($v1)
    ctx->pc = 0x1566fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_156700:
    // 0x156700: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x156700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_156704:
    // 0x156704: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x156704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_156708:
    // 0x156708: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x156708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_15670c:
    // 0x15670c: 0x60f809  jalr        $v1
label_156710:
    if (ctx->pc == 0x156710u) {
        ctx->pc = 0x156710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15670Cu;
        // 0x156710: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156714u;
        goto label_156714;
    }
    ctx->pc = 0x15670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156714u);
        ctx->pc = 0x156710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15670Cu;
        // 0x156710: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15670Cu, 0x156714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156714u;
label_156714:
    // 0x156714: 0xc06c5a2  jal         func_1B1688
label_156718:
    if (ctx->pc == 0x156718u) {
        ctx->pc = 0x156718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156714u;
        // 0x156718: 0x26640840  addiu       $a0, $s3, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15671Cu;
        goto label_15671c;
    }
    ctx->pc = 0x156714u;
    SET_GPR_U32(ctx, 31, 0x15671Cu);
    ctx->pc = 0x156718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156714u;
    // 0x156718: 0x26640840  addiu       $a0, $s3, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1688u, 0x156714u, 0x15671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15671Cu;
label_15671c:
    // 0x15671c: 0xc061748  jal         func_185D20
label_156720:
    if (ctx->pc == 0x156720u) {
        ctx->pc = 0x156720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15671Cu;
        // 0x156720: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156724u;
        goto label_156724;
    }
    ctx->pc = 0x15671Cu;
    SET_GPR_U32(ctx, 31, 0x156724u);
    ctx->pc = 0x156720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15671Cu;
    // 0x156720: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x15671Cu, 0x156724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156724u;
label_156724:
    // 0x156724: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_156728:
    if (ctx->pc == 0x156728u) {
        ctx->pc = 0x15672Cu;
        goto label_15672c;
    }
    ctx->pc = 0x156724u;
    {
        const bool branch_taken_0x156724 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x156724) {
            ctx->pc = 0x156750u;
            goto label_156750;
        }
    }
    ctx->pc = 0x15672Cu;
label_15672c:
    // 0x15672c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_156730:
    if (ctx->pc == 0x156730u) {
        ctx->pc = 0x156730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15672Cu;
        // 0x156730: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156734u;
        goto label_156734;
    }
    ctx->pc = 0x15672Cu;
    {
        const bool branch_taken_0x15672c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x156730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15672Cu;
        // 0x156730: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15672c) {
            ctx->pc = 0x156750u;
            goto label_156750;
        }
    }
    ctx->pc = 0x156734u;
label_156734:
    // 0x156734: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x156734u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_156738:
    // 0x156738: 0x8c65cdb4  lw          $a1, -0x324C($v1)
    ctx->pc = 0x156738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_15673c:
    // 0x15673c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_156740:
    // 0x156740: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x156740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_156744:
    // 0x156744: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_156748:
    // 0x156748: 0x60f809  jalr        $v1
label_15674c:
    if (ctx->pc == 0x15674Cu) {
        ctx->pc = 0x15674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156748u;
        // 0x15674c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156750u;
        goto label_156750;
    }
    ctx->pc = 0x156748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156750u);
        ctx->pc = 0x15674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156748u;
        // 0x15674c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156748u, 0x156750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156750u;
label_156750:
    // 0x156750: 0xc072a54  jal         func_1CA950
label_156754:
    if (ctx->pc == 0x156754u) {
        ctx->pc = 0x156754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156750u;
        // 0x156754: 0x26a49570  addiu       $a0, $s5, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156758u;
        goto label_156758;
    }
    ctx->pc = 0x156750u;
    SET_GPR_U32(ctx, 31, 0x156758u);
    ctx->pc = 0x156754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156750u;
    // 0x156754: 0x26a49570  addiu       $a0, $s5, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA950u, 0x156750u, 0x156758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156758u;
label_156758:
    // 0x156758: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15675c:
    if (ctx->pc == 0x15675Cu) {
        ctx->pc = 0x15675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156758u;
        // 0x15675c: 0x26d0ed70  addiu       $s0, $s6, -0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156760u;
        goto label_156760;
    }
    ctx->pc = 0x156758u;
    {
        const bool branch_taken_0x156758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156758u;
        // 0x15675c: 0x26d0ed70  addiu       $s0, $s6, -0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156758) {
            ctx->pc = 0x15676Cu;
            goto label_15676c;
        }
    }
    ctx->pc = 0x156760u;
label_156760:
    // 0x156760: 0xc061748  jal         func_185D20
label_156764:
    if (ctx->pc == 0x156764u) {
        ctx->pc = 0x156764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156760u;
        // 0x156764: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156768u;
        goto label_156768;
    }
    ctx->pc = 0x156760u;
    SET_GPR_U32(ctx, 31, 0x156768u);
    ctx->pc = 0x156764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156760u;
    // 0x156764: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x156760u, 0x156768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156768u;
label_156768:
    // 0x156768: 0x26d0ed70  addiu       $s0, $s6, -0x1290
    ctx->pc = 0x156768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962544));
label_15676c:
    // 0x15676c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_156770:
    // 0x156770: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_156774:
    if (ctx->pc == 0x156774u) {
        ctx->pc = 0x156774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156770u;
        // 0x156774: 0x26100500  addiu       $s0, $s0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156778u;
        goto label_156778;
    }
    ctx->pc = 0x156770u;
    {
        const bool branch_taken_0x156770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156770) {
            ctx->pc = 0x156774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156770u;
            // 0x156774: 0x26100500  addiu       $s0, $s0, 0x500 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15678Cu;
            goto label_15678c;
        }
    }
    ctx->pc = 0x156778u;
label_156778:
    // 0x156778: 0xc07ebc6  jal         func_1FAF18
label_15677c:
    if (ctx->pc == 0x15677Cu) {
        ctx->pc = 0x15677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156778u;
        // 0x15677c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156780u;
        goto label_156780;
    }
    ctx->pc = 0x156778u;
    SET_GPR_U32(ctx, 31, 0x156780u);
    ctx->pc = 0x15677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156778u;
    // 0x15677c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF18u, 0x156778u, 0x156780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156780u;
label_156780:
    // 0x156780: 0xc061748  jal         func_185D20
label_156784:
    if (ctx->pc == 0x156784u) {
        ctx->pc = 0x156784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156780u;
        // 0x156784: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156788u;
        goto label_156788;
    }
    ctx->pc = 0x156780u;
    SET_GPR_U32(ctx, 31, 0x156788u);
    ctx->pc = 0x156784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156780u;
    // 0x156784: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x156780u, 0x156788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156788u;
label_156788:
    // 0x156788: 0x26100500  addiu       $s0, $s0, 0x500
    ctx->pc = 0x156788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
label_15678c:
    // 0x15678c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_156790:
    // 0x156790: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_156794:
    if (ctx->pc == 0x156794u) {
        ctx->pc = 0x156798u;
        goto label_156798;
    }
    ctx->pc = 0x156790u;
    {
        const bool branch_taken_0x156790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156790) {
            ctx->pc = 0x1567C4u;
            goto label_1567c4;
        }
    }
    ctx->pc = 0x156798u;
label_156798:
    // 0x156798: 0xc06a7a4  jal         func_1A9E90
label_15679c:
    if (ctx->pc == 0x15679Cu) {
        ctx->pc = 0x15679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156798u;
        // 0x15679c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567A0u;
        goto label_1567a0;
    }
    ctx->pc = 0x156798u;
    SET_GPR_U32(ctx, 31, 0x1567A0u);
    ctx->pc = 0x15679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156798u;
    // 0x15679c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9E90u, 0x156798u, 0x1567A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567A0u;
label_1567a0:
    // 0x1567a0: 0xc06a842  jal         func_1AA108
label_1567a4:
    if (ctx->pc == 0x1567A4u) {
        ctx->pc = 0x1567A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567A0u;
        // 0x1567a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567A8u;
        goto label_1567a8;
    }
    ctx->pc = 0x1567A0u;
    SET_GPR_U32(ctx, 31, 0x1567A8u);
    ctx->pc = 0x1567A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567A0u;
    // 0x1567a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA108u, 0x1567A0u, 0x1567A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567A8u;
label_1567a8:
    // 0x1567a8: 0xc061748  jal         func_185D20
label_1567ac:
    if (ctx->pc == 0x1567ACu) {
        ctx->pc = 0x1567ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567A8u;
        // 0x1567ac: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567B0u;
        goto label_1567b0;
    }
    ctx->pc = 0x1567A8u;
    SET_GPR_U32(ctx, 31, 0x1567B0u);
    ctx->pc = 0x1567ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567A8u;
    // 0x1567ac: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x1567A8u, 0x1567B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567B0u;
label_1567b0:
    // 0x1567b0: 0x8e84deb8  lw          $a0, -0x2148($s4)
    ctx->pc = 0x1567b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958776)));
label_1567b4:
    // 0x1567b4: 0xc063644  jal         func_18D910
label_1567b8:
    if (ctx->pc == 0x1567B8u) {
        ctx->pc = 0x1567B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567B4u;
        // 0x1567b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567BCu;
        goto label_1567bc;
    }
    ctx->pc = 0x1567B4u;
    SET_GPR_U32(ctx, 31, 0x1567BCu);
    ctx->pc = 0x1567B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567B4u;
    // 0x1567b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D910u, 0x1567B4u, 0x1567BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567BCu;
label_1567bc:
    // 0x1567bc: 0xc061748  jal         func_185D20
label_1567c0:
    if (ctx->pc == 0x1567C0u) {
        ctx->pc = 0x1567C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567BCu;
        // 0x1567c0: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567C4u;
        goto label_1567c4;
    }
    ctx->pc = 0x1567BCu;
    SET_GPR_U32(ctx, 31, 0x1567C4u);
    ctx->pc = 0x1567C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567BCu;
    // 0x1567c0: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x1567BCu, 0x1567C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567C4u;
label_1567c4:
    // 0x1567c4: 0xc05f0c2  jal         func_17C308
label_1567c8:
    if (ctx->pc == 0x1567C8u) {
        ctx->pc = 0x1567CCu;
        goto label_1567cc;
    }
    ctx->pc = 0x1567C4u;
    SET_GPR_U32(ctx, 31, 0x1567CCu);
    ctx->pc = 0x17C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C308u, 0x1567C4u, 0x1567CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567CCu;
label_1567cc:
    // 0x1567cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1567ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1567d0:
    // 0x1567d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1567d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1567d4:
    // 0x1567d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1567d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1567d8:
    // 0x1567d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1567d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1567dc:
    // 0x1567dc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1567dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1567e0:
    // 0x1567e0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1567e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1567e4:
    // 0x1567e4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1567e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1567e8:
    // 0x1567e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1567e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1567ec:
    // 0x1567ec: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1567ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1567f0:
    // 0x1567f0: 0x3e00008  jr          $ra
label_1567f4:
    if (ctx->pc == 0x1567F4u) {
        ctx->pc = 0x1567F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567F0u;
        // 0x1567f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567F8u;
        goto label_fallthrough_0x1567f0;
    }
    ctx->pc = 0x1567F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1567F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567F0u;
        // 0x1567f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1567F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1567f0:
    ctx->pc = 0x1567F8u;
}
