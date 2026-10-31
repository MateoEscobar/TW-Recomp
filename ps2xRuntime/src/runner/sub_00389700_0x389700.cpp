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

// Function: sub_00389700
// Address: 0x389700 - 0x389760
void sub_00389700_0x389700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389700_0x389700");
#endif

    switch (ctx->pc) {
        case 0x389700u: goto label_389700;
        case 0x389704u: goto label_389704;
        case 0x389708u: goto label_389708;
        case 0x38970cu: goto label_38970c;
        case 0x389710u: goto label_389710;
        case 0x389714u: goto label_389714;
        case 0x389718u: goto label_389718;
        case 0x38971cu: goto label_38971c;
        case 0x389720u: goto label_389720;
        case 0x389724u: goto label_389724;
        case 0x389728u: goto label_389728;
        case 0x38972cu: goto label_38972c;
        case 0x389730u: goto label_389730;
        case 0x389734u: goto label_389734;
        case 0x389738u: goto label_389738;
        case 0x38973cu: goto label_38973c;
        case 0x389740u: goto label_389740;
        case 0x389744u: goto label_389744;
        case 0x389748u: goto label_389748;
        case 0x38974cu: goto label_38974c;
        case 0x389750u: goto label_389750;
        case 0x389754u: goto label_389754;
        case 0x389758u: goto label_389758;
        case 0x38975cu: goto label_38975c;
        default: break;
    }

    ctx->pc = 0x389700u;

label_389700:
    // 0x389700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_389704:
    // 0x389704: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x389704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_389708:
    // 0x389708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38970c:
    // 0x38970c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_389710:
    // 0x389710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x389710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_389714:
    // 0x389714: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x389714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_389718:
    // 0x389718: 0x8c452c7c  lw          $a1, 0x2C7C($v0)
    ctx->pc = 0x389718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_38971c:
    // 0x38971c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x38971cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_389720:
    // 0x389720: 0x8cb00844  lw          $s0, 0x844($a1)
    ctx->pc = 0x389720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2116)));
label_389724:
    // 0x389724: 0x84c30028  lh          $v1, 0x28($a2)
    ctx->pc = 0x389724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
label_389728:
    // 0x389728: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x389728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_38972c:
    // 0x38972c: 0x40f809  jalr        $v0
label_389730:
    if (ctx->pc == 0x389730u) {
        ctx->pc = 0x389730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38972Cu;
        // 0x389730: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389734u;
        goto label_389734;
    }
    ctx->pc = 0x38972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389734u);
        ctx->pc = 0x389730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38972Cu;
        // 0x389730: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38972Cu, 0x389734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389734u;
label_389734:
    // 0x389734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389738:
    // 0x389738: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x389738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38973c:
    // 0x38973c: 0xc0e3afe  jal         func_38EBF8
label_389740:
    if (ctx->pc == 0x389740u) {
        ctx->pc = 0x389740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38973Cu;
        // 0x389740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389744u;
        goto label_389744;
    }
    ctx->pc = 0x38973Cu;
    SET_GPR_U32(ctx, 31, 0x389744u);
    ctx->pc = 0x389740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38973Cu;
    // 0x389740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EBF8u, 0x38973Cu, 0x389744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389744u;
label_389744:
    // 0x389744: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x389744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389748:
    // 0x389748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38974c:
    // 0x38974c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38974cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389750:
    // 0x389750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389754:
    // 0x389754: 0x3e00008  jr          $ra
label_389758:
    if (ctx->pc == 0x389758u) {
        ctx->pc = 0x389758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389754u;
        // 0x389758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38975Cu;
        goto label_38975c;
    }
    ctx->pc = 0x389754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389754u;
        // 0x389758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38975Cu;
label_38975c:
    // 0x38975c: 0x0  nop
    ctx->pc = 0x38975cu;
    // NOP
    ctx->pc = 0x389760u;
}
