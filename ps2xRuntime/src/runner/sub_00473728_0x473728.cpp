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

// Function: sub_00473728
// Address: 0x473728 - 0x4737d8
void sub_00473728_0x473728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473728_0x473728");
#endif

    switch (ctx->pc) {
        case 0x473728u: goto label_473728;
        case 0x47372cu: goto label_47372c;
        case 0x473730u: goto label_473730;
        case 0x473734u: goto label_473734;
        case 0x473738u: goto label_473738;
        case 0x47373cu: goto label_47373c;
        case 0x473740u: goto label_473740;
        case 0x473744u: goto label_473744;
        case 0x473748u: goto label_473748;
        case 0x47374cu: goto label_47374c;
        case 0x473750u: goto label_473750;
        case 0x473754u: goto label_473754;
        case 0x473758u: goto label_473758;
        case 0x47375cu: goto label_47375c;
        case 0x473760u: goto label_473760;
        case 0x473764u: goto label_473764;
        case 0x473768u: goto label_473768;
        case 0x47376cu: goto label_47376c;
        case 0x473770u: goto label_473770;
        case 0x473774u: goto label_473774;
        case 0x473778u: goto label_473778;
        case 0x47377cu: goto label_47377c;
        case 0x473780u: goto label_473780;
        case 0x473784u: goto label_473784;
        case 0x473788u: goto label_473788;
        case 0x47378cu: goto label_47378c;
        case 0x473790u: goto label_473790;
        case 0x473794u: goto label_473794;
        case 0x473798u: goto label_473798;
        case 0x47379cu: goto label_47379c;
        case 0x4737a0u: goto label_4737a0;
        case 0x4737a4u: goto label_4737a4;
        case 0x4737a8u: goto label_4737a8;
        case 0x4737acu: goto label_4737ac;
        case 0x4737b0u: goto label_4737b0;
        case 0x4737b4u: goto label_4737b4;
        case 0x4737b8u: goto label_4737b8;
        case 0x4737bcu: goto label_4737bc;
        case 0x4737c0u: goto label_4737c0;
        case 0x4737c4u: goto label_4737c4;
        case 0x4737c8u: goto label_4737c8;
        case 0x4737ccu: goto label_4737cc;
        case 0x4737d0u: goto label_4737d0;
        case 0x4737d4u: goto label_4737d4;
        default: break;
    }

    ctx->pc = 0x473728u;

label_473728:
    // 0x473728: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x473728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_47372c:
    // 0x47372c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x47372cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_473730:
    // 0x473730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x473730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_473734:
    // 0x473734: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x473734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_473738:
    // 0x473738: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x473738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47373c:
    // 0x47373c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47373cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_473740:
    // 0x473740: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x473740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_473744:
    // 0x473744: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x473744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_473748:
    // 0x473748: 0x8e50002c  lw          $s0, 0x2C($s2)
    ctx->pc = 0x473748u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_47374c:
    // 0x47374c: 0x12110019  beq         $s0, $s1, . + 4 + (0x19 << 2)
label_473750:
    if (ctx->pc == 0x473750u) {
        ctx->pc = 0x473750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47374Cu;
        // 0x473750: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473754u;
        goto label_473754;
    }
    ctx->pc = 0x47374Cu;
    {
        const bool branch_taken_0x47374c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x473750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47374Cu;
        // 0x473750: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47374c) {
            ctx->pc = 0x4737B4u;
            goto label_4737b4;
        }
    }
    ctx->pc = 0x473754u;
label_473754:
    // 0x473754: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x473754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_473758:
    // 0x473758: 0x2603fff4  addiu       $v1, $s0, -0xC
    ctx->pc = 0x473758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_47375c:
    // 0x47375c: 0x0  nop
    ctx->pc = 0x47375cu;
    // NOP
label_473760:
    // 0x473760: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x473760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_473764:
    // 0x473764: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x473764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_473768:
    // 0x473768: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x473768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_47376c:
    // 0x47376c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x47376cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_473770:
    // 0x473770: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x473770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_473774:
    // 0x473774: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x473774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_473778:
    // 0x473778: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x473778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_47377c:
    // 0x47377c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x47377cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_473780:
    // 0x473780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x473780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_473784:
    // 0x473784: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x473784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_473788:
    // 0x473788: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x473788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_47378c:
    // 0x47378c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47378cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_473790:
    // 0x473790: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x473790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_473794:
    // 0x473794: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x473794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_473798:
    // 0x473798: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x473798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_47379c:
    // 0x47379c: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x47379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_4737a0:
    // 0x4737a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4737a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4737a4:
    // 0x4737a4: 0x40f809  jalr        $v0
label_4737a8:
    if (ctx->pc == 0x4737A8u) {
        ctx->pc = 0x4737A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4737A4u;
        // 0x4737a8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4737ACu;
        goto label_4737ac;
    }
    ctx->pc = 0x4737A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4737ACu);
        ctx->pc = 0x4737A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4737A4u;
        // 0x4737a8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4737A4u, 0x4737ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4737ACu;
label_4737ac:
    // 0x4737ac: 0x1611ffec  bne         $s0, $s1, . + 4 + (-0x14 << 2)
label_4737b0:
    if (ctx->pc == 0x4737B0u) {
        ctx->pc = 0x4737B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4737ACu;
        // 0x4737b0: 0x2603fff4  addiu       $v1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4737B4u;
        goto label_4737b4;
    }
    ctx->pc = 0x4737ACu;
    {
        const bool branch_taken_0x4737ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x4737B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4737ACu;
        // 0x4737b0: 0x2603fff4  addiu       $v1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4737ac) {
            ctx->pc = 0x473760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_473760;
        }
    }
    ctx->pc = 0x4737B4u;
label_4737b4:
    // 0x4737b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4737b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4737b8:
    // 0x4737b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4737b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4737bc:
    // 0x4737bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4737bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4737c0:
    // 0x4737c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4737c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4737c4:
    // 0x4737c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4737c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4737c8:
    // 0x4737c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4737c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4737cc:
    // 0x4737cc: 0x3e00008  jr          $ra
label_4737d0:
    if (ctx->pc == 0x4737D0u) {
        ctx->pc = 0x4737D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4737CCu;
        // 0x4737d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4737D4u;
        goto label_4737d4;
    }
    ctx->pc = 0x4737CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4737D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4737CCu;
        // 0x4737d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4737CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4737D4u;
label_4737d4:
    // 0x4737d4: 0x0  nop
    ctx->pc = 0x4737d4u;
    // NOP
    ctx->pc = 0x4737d8u;
}
