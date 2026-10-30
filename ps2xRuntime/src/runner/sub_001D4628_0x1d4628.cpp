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

// Function: sub_001D4628
// Address: 0x1d4628 - 0x1d4790
void sub_001D4628_0x1d4628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4628_0x1d4628");
#endif

    switch (ctx->pc) {
        case 0x1d4628u: goto label_1d4628;
        case 0x1d462cu: goto label_1d462c;
        case 0x1d4630u: goto label_1d4630;
        case 0x1d4634u: goto label_1d4634;
        case 0x1d4638u: goto label_1d4638;
        case 0x1d463cu: goto label_1d463c;
        case 0x1d4640u: goto label_1d4640;
        case 0x1d4644u: goto label_1d4644;
        case 0x1d4648u: goto label_1d4648;
        case 0x1d464cu: goto label_1d464c;
        case 0x1d4650u: goto label_1d4650;
        case 0x1d4654u: goto label_1d4654;
        case 0x1d4658u: goto label_1d4658;
        case 0x1d465cu: goto label_1d465c;
        case 0x1d4660u: goto label_1d4660;
        case 0x1d4664u: goto label_1d4664;
        case 0x1d4668u: goto label_1d4668;
        case 0x1d466cu: goto label_1d466c;
        case 0x1d4670u: goto label_1d4670;
        case 0x1d4674u: goto label_1d4674;
        case 0x1d4678u: goto label_1d4678;
        case 0x1d467cu: goto label_1d467c;
        case 0x1d4680u: goto label_1d4680;
        case 0x1d4684u: goto label_1d4684;
        case 0x1d4688u: goto label_1d4688;
        case 0x1d468cu: goto label_1d468c;
        case 0x1d4690u: goto label_1d4690;
        case 0x1d4694u: goto label_1d4694;
        case 0x1d4698u: goto label_1d4698;
        case 0x1d469cu: goto label_1d469c;
        case 0x1d46a0u: goto label_1d46a0;
        case 0x1d46a4u: goto label_1d46a4;
        case 0x1d46a8u: goto label_1d46a8;
        case 0x1d46acu: goto label_1d46ac;
        case 0x1d46b0u: goto label_1d46b0;
        case 0x1d46b4u: goto label_1d46b4;
        case 0x1d46b8u: goto label_1d46b8;
        case 0x1d46bcu: goto label_1d46bc;
        case 0x1d46c0u: goto label_1d46c0;
        case 0x1d46c4u: goto label_1d46c4;
        case 0x1d46c8u: goto label_1d46c8;
        case 0x1d46ccu: goto label_1d46cc;
        case 0x1d46d0u: goto label_1d46d0;
        case 0x1d46d4u: goto label_1d46d4;
        case 0x1d46d8u: goto label_1d46d8;
        case 0x1d46dcu: goto label_1d46dc;
        case 0x1d46e0u: goto label_1d46e0;
        case 0x1d46e4u: goto label_1d46e4;
        case 0x1d46e8u: goto label_1d46e8;
        case 0x1d46ecu: goto label_1d46ec;
        case 0x1d46f0u: goto label_1d46f0;
        case 0x1d46f4u: goto label_1d46f4;
        case 0x1d46f8u: goto label_1d46f8;
        case 0x1d46fcu: goto label_1d46fc;
        case 0x1d4700u: goto label_1d4700;
        case 0x1d4704u: goto label_1d4704;
        case 0x1d4708u: goto label_1d4708;
        case 0x1d470cu: goto label_1d470c;
        case 0x1d4710u: goto label_1d4710;
        case 0x1d4714u: goto label_1d4714;
        case 0x1d4718u: goto label_1d4718;
        case 0x1d471cu: goto label_1d471c;
        case 0x1d4720u: goto label_1d4720;
        case 0x1d4724u: goto label_1d4724;
        case 0x1d4728u: goto label_1d4728;
        case 0x1d472cu: goto label_1d472c;
        case 0x1d4730u: goto label_1d4730;
        case 0x1d4734u: goto label_1d4734;
        case 0x1d4738u: goto label_1d4738;
        case 0x1d473cu: goto label_1d473c;
        case 0x1d4740u: goto label_1d4740;
        case 0x1d4744u: goto label_1d4744;
        case 0x1d4748u: goto label_1d4748;
        case 0x1d474cu: goto label_1d474c;
        case 0x1d4750u: goto label_1d4750;
        case 0x1d4754u: goto label_1d4754;
        case 0x1d4758u: goto label_1d4758;
        case 0x1d475cu: goto label_1d475c;
        case 0x1d4760u: goto label_1d4760;
        case 0x1d4764u: goto label_1d4764;
        case 0x1d4768u: goto label_1d4768;
        case 0x1d476cu: goto label_1d476c;
        case 0x1d4770u: goto label_1d4770;
        case 0x1d4774u: goto label_1d4774;
        case 0x1d4778u: goto label_1d4778;
        case 0x1d477cu: goto label_1d477c;
        case 0x1d4780u: goto label_1d4780;
        case 0x1d4784u: goto label_1d4784;
        case 0x1d4788u: goto label_1d4788;
        case 0x1d478cu: goto label_1d478c;
        default: break;
    }

    ctx->pc = 0x1d4628u;

label_1d4628:
    // 0x1d4628: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d4628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d462c:
    // 0x1d462c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d462cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d4630:
    // 0x1d4630: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d4630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d4634:
    // 0x1d4634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4638:
    // 0x1d4638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d463c:
    // 0x1d463c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d4640:
    // 0x1d4640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d4644:
    // 0x1d4644: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x1d4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_1d4648:
    // 0x1d4648: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d4648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d464c:
    // 0x1d464c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_1d4650:
    if (ctx->pc == 0x1D4650u) {
        ctx->pc = 0x1D4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D464Cu;
        // 0x1d4650: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4654u;
        goto label_1d4654;
    }
    ctx->pc = 0x1D464Cu;
    {
        const bool branch_taken_0x1d464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D464Cu;
        // 0x1d4650: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d464c) {
            ctx->pc = 0x1D4774u;
            goto label_1d4774;
        }
    }
    ctx->pc = 0x1D4654u;
label_1d4654:
    // 0x1d4654: 0xc07514c  jal         func_1D4530
label_1d4658:
    if (ctx->pc == 0x1D4658u) {
        ctx->pc = 0x1D465Cu;
        goto label_1d465c;
    }
    ctx->pc = 0x1D4654u;
    SET_GPR_U32(ctx, 31, 0x1D465Cu);
    ctx->pc = 0x1D4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4530u, 0x1D4654u, 0x1D465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D465Cu;
label_1d465c:
    // 0x1d465c: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1d4660:
    // 0x1d4660: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d4660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4664:
    // 0x1d4664: 0xc075164  jal         func_1D4590
label_1d4668:
    if (ctx->pc == 0x1D4668u) {
        ctx->pc = 0x1D4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4664u;
        // 0x1d4668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D466Cu;
        goto label_1d466c;
    }
    ctx->pc = 0x1D4664u;
    SET_GPR_U32(ctx, 31, 0x1D466Cu);
    ctx->pc = 0x1D4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4664u;
    // 0x1d4668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x1D4664u, 0x1D466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D466Cu;
label_1d466c:
    // 0x1d466c: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x1d466cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d4670:
    // 0x1d4670: 0x642000b  bltzl       $s2, . + 4 + (0xB << 2)
label_1d4674:
    if (ctx->pc == 0x1D4674u) {
        ctx->pc = 0x1D4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4670u;
        // 0x1d4674: 0x8e2500ac  lw          $a1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4678u;
        goto label_1d4678;
    }
    ctx->pc = 0x1D4670u;
    {
        const bool branch_taken_0x1d4670 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1d4670) {
            ctx->pc = 0x1D4674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4670u;
            // 0x1d4674: 0x8e2500ac  lw          $a1, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D46A0u;
            goto label_1d46a0;
        }
    }
    ctx->pc = 0x1D4678u;
label_1d4678:
    // 0x1d4678: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d4678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d467c:
    // 0x1d467c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d467cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4680:
    // 0x1d4680: 0xc07515c  jal         func_1D4570
label_1d4684:
    if (ctx->pc == 0x1D4684u) {
        ctx->pc = 0x1D4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4680u;
        // 0x1d4684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4688u;
        goto label_1d4688;
    }
    ctx->pc = 0x1D4680u;
    SET_GPR_U32(ctx, 31, 0x1D4688u);
    ctx->pc = 0x1D4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4680u;
    // 0x1d4684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4570u, 0x1D4680u, 0x1D4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4688u;
label_1d4688:
    // 0x1d4688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d468c:
    // 0x1d468c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d4690:
    // 0x1d4690: 0xc07517e  jal         func_1D45F8
label_1d4694:
    if (ctx->pc == 0x1D4694u) {
        ctx->pc = 0x1D4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4690u;
        // 0x1d4694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4698u;
        goto label_1d4698;
    }
    ctx->pc = 0x1D4690u;
    SET_GPR_U32(ctx, 31, 0x1D4698u);
    ctx->pc = 0x1D4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4690u;
    // 0x1d4694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45F8u, 0x1D4690u, 0x1D4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4698u;
label_1d4698:
    // 0x1d4698: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d469c:
    if (ctx->pc == 0x1D469Cu) {
        ctx->pc = 0x1D469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4698u;
        // 0x1d469c: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46A0u;
        goto label_1d46a0;
    }
    ctx->pc = 0x1D4698u;
    {
        const bool branch_taken_0x1d4698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4698u;
        // 0x1d469c: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4698) {
            ctx->pc = 0x1D46C8u;
            goto label_1d46c8;
        }
    }
    ctx->pc = 0x1D46A0u;
label_1d46a0:
    // 0x1d46a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d46a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d46a4:
    // 0x1d46a4: 0xc07517e  jal         func_1D45F8
label_1d46a8:
    if (ctx->pc == 0x1D46A8u) {
        ctx->pc = 0x1D46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46A4u;
        // 0x1d46a8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46ACu;
        goto label_1d46ac;
    }
    ctx->pc = 0x1D46A4u;
    SET_GPR_U32(ctx, 31, 0x1D46ACu);
    ctx->pc = 0x1D46A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46A4u;
    // 0x1d46a8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45F8u, 0x1D46A4u, 0x1D46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46ACu;
label_1d46ac:
    // 0x1d46ac: 0x8e2600ac  lw          $a2, 0xAC($s1)
    ctx->pc = 0x1d46acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_1d46b0:
    // 0x1d46b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d46b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d46b4:
    // 0x1d46b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d46b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d46b8:
    // 0x1d46b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d46b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d46bc:
    // 0x1d46bc: 0xc07515c  jal         func_1D4570
label_1d46c0:
    if (ctx->pc == 0x1D46C0u) {
        ctx->pc = 0x1D46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46BCu;
        // 0x1d46c0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46C4u;
        goto label_1d46c4;
    }
    ctx->pc = 0x1D46BCu;
    SET_GPR_U32(ctx, 31, 0x1D46C4u);
    ctx->pc = 0x1D46C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46BCu;
    // 0x1d46c0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4570u, 0x1D46BCu, 0x1D46C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46C4u;
label_1d46c4:
    // 0x1d46c4: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1d46c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d46c8:
    // 0x1d46c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d46c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d46cc:
    // 0x1d46cc: 0xc07512e  jal         func_1D44B8
label_1d46d0:
    if (ctx->pc == 0x1D46D0u) {
        ctx->pc = 0x1D46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46CCu;
        // 0x1d46d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46D4u;
        goto label_1d46d4;
    }
    ctx->pc = 0x1D46CCu;
    SET_GPR_U32(ctx, 31, 0x1D46D4u);
    ctx->pc = 0x1D46D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46CCu;
    // 0x1d46d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B8u, 0x1D46CCu, 0x1D46D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46D4u;
label_1d46d4:
    // 0x1d46d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d46d8:
    if (ctx->pc == 0x1D46D8u) {
        ctx->pc = 0x1D46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46D4u;
        // 0x1d46d8: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46DCu;
        goto label_1d46dc;
    }
    ctx->pc = 0x1D46D4u;
    {
        const bool branch_taken_0x1d46d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46D4u;
        // 0x1d46d8: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46d4) {
            ctx->pc = 0x1D4718u;
            goto label_1d4718;
        }
    }
    ctx->pc = 0x1D46DCu;
label_1d46dc:
    // 0x1d46dc: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1d46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1d46e0:
    // 0x1d46e0: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_1d46e4:
    if (ctx->pc == 0x1D46E4u) {
        ctx->pc = 0x1D46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46E0u;
        // 0x1d46e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46E8u;
        goto label_1d46e8;
    }
    ctx->pc = 0x1D46E0u;
    {
        const bool branch_taken_0x1d46e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46E0u;
        // 0x1d46e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46e0) {
            ctx->pc = 0x1D46FCu;
            goto label_1d46fc;
        }
    }
    ctx->pc = 0x1D46E8u;
label_1d46e8:
    // 0x1d46e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d46e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d46ec:
    // 0x1d46ec: 0xc0752e2  jal         func_1D4B88
label_1d46f0:
    if (ctx->pc == 0x1D46F0u) {
        ctx->pc = 0x1D46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46ECu;
        // 0x1d46f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46F4u;
        goto label_1d46f4;
    }
    ctx->pc = 0x1D46ECu;
    SET_GPR_U32(ctx, 31, 0x1D46F4u);
    ctx->pc = 0x1D46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46ECu;
    // 0x1d46f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1D46ECu, 0x1D46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46F4u;
label_1d46f4:
    // 0x1d46f4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d46f8:
    if (ctx->pc == 0x1D46F8u) {
        ctx->pc = 0x1D46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46F4u;
        // 0x1d46f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46FCu;
        goto label_1d46fc;
    }
    ctx->pc = 0x1D46F4u;
    {
        const bool branch_taken_0x1d46f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46F4u;
        // 0x1d46f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46f4) {
            ctx->pc = 0x1D4774u;
            goto label_1d4774;
        }
    }
    ctx->pc = 0x1D46FCu;
label_1d46fc:
    // 0x1d46fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d4700:
    // 0x1d4700: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d4700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d4704:
    // 0x1d4704: 0xc043f0c  jal         func_10FC30
label_1d4708:
    if (ctx->pc == 0x1D4708u) {
        ctx->pc = 0x1D4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4704u;
        // 0x1d4708: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D470Cu;
        goto label_1d470c;
    }
    ctx->pc = 0x1D4704u;
    SET_GPR_U32(ctx, 31, 0x1D470Cu);
    ctx->pc = 0x1D4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4704u;
    // 0x1d4708: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D4704u, 0x1D470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D470Cu;
label_1d470c:
    // 0x1d470c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4710:
    // 0x1d4710: 0x10000017  b           . + 4 + (0x17 << 2)
label_1d4714:
    if (ctx->pc == 0x1D4714u) {
        ctx->pc = 0x1D4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4710u;
        // 0x1d4714: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4718u;
        goto label_1d4718;
    }
    ctx->pc = 0x1D4710u;
    {
        const bool branch_taken_0x1d4710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4710u;
        // 0x1d4714: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4710) {
            ctx->pc = 0x1D4770u;
            goto label_1d4770;
        }
    }
    ctx->pc = 0x1D4718u;
label_1d4718:
    // 0x1d4718: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1d4718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1d471c:
    // 0x1d471c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d4720:
    // 0x1d4720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d4724:
    // 0x1d4724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d4728:
    // 0x1d4728: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d4728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d472c:
    // 0x1d472c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4730:
    // 0x1d4730: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1d4734:
    // 0x1d4734: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1d4738:
    // 0x1d4738: 0x60f809  jalr        $v1
label_1d473c:
    if (ctx->pc == 0x1D473Cu) {
        ctx->pc = 0x1D473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4738u;
        // 0x1d473c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4740u;
        goto label_1d4740;
    }
    ctx->pc = 0x1D4738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D4740u);
        ctx->pc = 0x1D473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4738u;
        // 0x1d473c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4738u, 0x1D4740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4740u;
label_1d4740:
    // 0x1d4740: 0xae3200a4  sw          $s2, 0xA4($s1)
    ctx->pc = 0x1d4740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 18));
label_1d4744:
    // 0x1d4744: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d4748:
    // 0x1d4748: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d474c:
    // 0x1d474c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d4750:
    // 0x1d4750: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4754:
    // 0x1d4754: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4758:
    // 0x1d4758: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1d475c:
    // 0x1d475c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1d475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1d4760:
    // 0x1d4760: 0x40f809  jalr        $v0
label_1d4764:
    if (ctx->pc == 0x1D4764u) {
        ctx->pc = 0x1D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4760u;
        // 0x1d4764: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4768u;
        goto label_1d4768;
    }
    ctx->pc = 0x1D4760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4768u);
        ctx->pc = 0x1D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4760u;
        // 0x1d4764: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4760u, 0x1D4768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4768u;
label_1d4768:
    // 0x1d4768: 0xc07518a  jal         func_1D4628
label_1d476c:
    if (ctx->pc == 0x1D476Cu) {
        ctx->pc = 0x1D476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4768u;
        // 0x1d476c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4770u;
        goto label_1d4770;
    }
    ctx->pc = 0x1D4768u;
    SET_GPR_U32(ctx, 31, 0x1D4770u);
    ctx->pc = 0x1D476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4768u;
    // 0x1d476c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4628u;
    goto label_1d4628;
    ctx->pc = 0x1D4770u;
label_1d4770:
    // 0x1d4770: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d4770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d4774:
    // 0x1d4774: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d4774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d4778:
    // 0x1d4778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d477c:
    // 0x1d477c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d477cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4780:
    // 0x1d4780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4784:
    // 0x1d4784: 0x3e00008  jr          $ra
label_1d4788:
    if (ctx->pc == 0x1D4788u) {
        ctx->pc = 0x1D4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4784u;
        // 0x1d4788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D478Cu;
        goto label_1d478c;
    }
    ctx->pc = 0x1D4784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4784u;
        // 0x1d4788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D478Cu;
label_1d478c:
    // 0x1d478c: 0x0  nop
    ctx->pc = 0x1d478cu;
    // NOP
    ctx->pc = 0x1d4790u;
}
