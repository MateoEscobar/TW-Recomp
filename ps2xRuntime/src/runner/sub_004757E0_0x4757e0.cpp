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

// Function: sub_004757E0
// Address: 0x4757e0 - 0x475898
void sub_004757E0_0x4757e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004757E0_0x4757e0");
#endif

    switch (ctx->pc) {
        case 0x4757e0u: goto label_4757e0;
        case 0x4757e4u: goto label_4757e4;
        case 0x4757e8u: goto label_4757e8;
        case 0x4757ecu: goto label_4757ec;
        case 0x4757f0u: goto label_4757f0;
        case 0x4757f4u: goto label_4757f4;
        case 0x4757f8u: goto label_4757f8;
        case 0x4757fcu: goto label_4757fc;
        case 0x475800u: goto label_475800;
        case 0x475804u: goto label_475804;
        case 0x475808u: goto label_475808;
        case 0x47580cu: goto label_47580c;
        case 0x475810u: goto label_475810;
        case 0x475814u: goto label_475814;
        case 0x475818u: goto label_475818;
        case 0x47581cu: goto label_47581c;
        case 0x475820u: goto label_475820;
        case 0x475824u: goto label_475824;
        case 0x475828u: goto label_475828;
        case 0x47582cu: goto label_47582c;
        case 0x475830u: goto label_475830;
        case 0x475834u: goto label_475834;
        case 0x475838u: goto label_475838;
        case 0x47583cu: goto label_47583c;
        case 0x475840u: goto label_475840;
        case 0x475844u: goto label_475844;
        case 0x475848u: goto label_475848;
        case 0x47584cu: goto label_47584c;
        case 0x475850u: goto label_475850;
        case 0x475854u: goto label_475854;
        case 0x475858u: goto label_475858;
        case 0x47585cu: goto label_47585c;
        case 0x475860u: goto label_475860;
        case 0x475864u: goto label_475864;
        case 0x475868u: goto label_475868;
        case 0x47586cu: goto label_47586c;
        case 0x475870u: goto label_475870;
        case 0x475874u: goto label_475874;
        case 0x475878u: goto label_475878;
        case 0x47587cu: goto label_47587c;
        case 0x475880u: goto label_475880;
        case 0x475884u: goto label_475884;
        case 0x475888u: goto label_475888;
        case 0x47588cu: goto label_47588c;
        case 0x475890u: goto label_475890;
        case 0x475894u: goto label_475894;
        default: break;
    }

    ctx->pc = 0x4757e0u;

label_4757e0:
    // 0x4757e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4757e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4757e4:
    // 0x4757e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4757e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4757e8:
    // 0x4757e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4757e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4757ec:
    // 0x4757ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4757ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4757f0:
    // 0x4757f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4757f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4757f4:
    // 0x4757f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4757f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4757f8:
    // 0x4757f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4757f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4757fc:
    // 0x4757fc: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x4757fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_475800:
    // 0x475800: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x475800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_475804:
    // 0x475804: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_475808:
    if (ctx->pc == 0x475808u) {
        ctx->pc = 0x475808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475804u;
        // 0x475808: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47580Cu;
        goto label_47580c;
    }
    ctx->pc = 0x475804u;
    {
        const bool branch_taken_0x475804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475804u;
        // 0x475808: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475804) {
            ctx->pc = 0x475864u;
            goto label_475864;
        }
    }
    ctx->pc = 0x47580Cu;
label_47580c:
    // 0x47580c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x47580cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_475810:
    // 0x475810: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x475810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_475814:
    // 0x475814: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x475814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_475818:
    // 0x475818: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x475818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47581c:
    // 0x47581c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_475820:
    if (ctx->pc == 0x475820u) {
        ctx->pc = 0x475820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47581Cu;
        // 0x475820: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475824u;
        goto label_475824;
    }
    ctx->pc = 0x47581Cu;
    {
        const bool branch_taken_0x47581c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x475820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47581Cu;
        // 0x475820: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47581c) {
            ctx->pc = 0x475858u;
            goto label_475858;
        }
    }
    ctx->pc = 0x475824u;
label_475824:
    // 0x475824: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x475824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_475828:
    // 0x475828: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_47582c:
    if (ctx->pc == 0x47582Cu) {
        ctx->pc = 0x47582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475828u;
        // 0x47582c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475830u;
        goto label_475830;
    }
    ctx->pc = 0x475828u;
    {
        const bool branch_taken_0x475828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475828) {
            ctx->pc = 0x47582Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475828u;
            // 0x47582c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475854u;
            goto label_475854;
        }
    }
    ctx->pc = 0x475830u;
label_475830:
    // 0x475830: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x475830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_475834:
    // 0x475834: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_475838:
    if (ctx->pc == 0x475838u) {
        ctx->pc = 0x475838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475834u;
        // 0x475838: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47583Cu;
        goto label_47583c;
    }
    ctx->pc = 0x475834u;
    {
        const bool branch_taken_0x475834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475834) {
            ctx->pc = 0x475838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475834u;
            // 0x475838: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475854u;
            goto label_475854;
        }
    }
    ctx->pc = 0x47583Cu;
label_47583c:
    // 0x47583c: 0xc11d5a4  jal         func_475690
label_475840:
    if (ctx->pc == 0x475840u) {
        ctx->pc = 0x475840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47583Cu;
        // 0x475840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475844u;
        goto label_475844;
    }
    ctx->pc = 0x47583Cu;
    SET_GPR_U32(ctx, 31, 0x475844u);
    ctx->pc = 0x475840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47583Cu;
    // 0x475840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x475690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x475690u, 0x47583Cu, 0x475844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475844u;
label_475844:
    // 0x475844: 0xc11fa54  jal         func_47E950
label_475848:
    if (ctx->pc == 0x475848u) {
        ctx->pc = 0x475848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475844u;
        // 0x475848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47584Cu;
        goto label_47584c;
    }
    ctx->pc = 0x475844u;
    SET_GPR_U32(ctx, 31, 0x47584Cu);
    ctx->pc = 0x475848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475844u;
    // 0x475848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x475844u, 0x47584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47584Cu;
label_47584c:
    // 0x47584c: 0x10000002  b           . + 4 + (0x2 << 2)
label_475850:
    if (ctx->pc == 0x475850u) {
        ctx->pc = 0x475850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47584Cu;
        // 0x475850: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475854u;
        goto label_475854;
    }
    ctx->pc = 0x47584Cu;
    {
        const bool branch_taken_0x47584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47584Cu;
        // 0x475850: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47584c) {
            ctx->pc = 0x475858u;
            goto label_475858;
        }
    }
    ctx->pc = 0x475854u;
label_475854:
    // 0x475854: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x475854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_475858:
    // 0x475858: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x475858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_47585c:
    // 0x47585c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_475860:
    if (ctx->pc == 0x475860u) {
        ctx->pc = 0x475860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47585Cu;
        // 0x475860: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475864u;
        goto label_475864;
    }
    ctx->pc = 0x47585Cu;
    {
        const bool branch_taken_0x47585c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x475860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47585Cu;
        // 0x475860: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47585c) {
            ctx->pc = 0x475818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475818;
        }
    }
    ctx->pc = 0x475864u;
label_475864:
    // 0x475864: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x475864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_475868:
    // 0x475868: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x475868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47586c:
    // 0x47586c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x47586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_475870:
    // 0x475870: 0x60f809  jalr        $v1
label_475874:
    if (ctx->pc == 0x475874u) {
        ctx->pc = 0x475874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475870u;
        // 0x475874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475878u;
        goto label_475878;
    }
    ctx->pc = 0x475870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x475878u);
        ctx->pc = 0x475874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475870u;
        // 0x475874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475870u, 0x475878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475878u;
label_475878:
    // 0x475878: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x475878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47587c:
    // 0x47587c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x47587cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_475880:
    // 0x475880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x475880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_475884:
    // 0x475884: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x475884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_475888:
    // 0x475888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x475888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47588c:
    // 0x47588c: 0x3e00008  jr          $ra
label_475890:
    if (ctx->pc == 0x475890u) {
        ctx->pc = 0x475890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47588Cu;
        // 0x475890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475894u;
        goto label_475894;
    }
    ctx->pc = 0x47588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x475890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47588Cu;
        // 0x475890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47588Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475894u;
label_475894:
    // 0x475894: 0x0  nop
    ctx->pc = 0x475894u;
    // NOP
    ctx->pc = 0x475898u;
}
