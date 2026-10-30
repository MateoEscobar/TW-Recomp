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

// Function: sub_00483720
// Address: 0x483720 - 0x4837a0
void sub_00483720_0x483720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483720_0x483720");
#endif

    switch (ctx->pc) {
        case 0x483720u: goto label_483720;
        case 0x483724u: goto label_483724;
        case 0x483728u: goto label_483728;
        case 0x48372cu: goto label_48372c;
        case 0x483730u: goto label_483730;
        case 0x483734u: goto label_483734;
        case 0x483738u: goto label_483738;
        case 0x48373cu: goto label_48373c;
        case 0x483740u: goto label_483740;
        case 0x483744u: goto label_483744;
        case 0x483748u: goto label_483748;
        case 0x48374cu: goto label_48374c;
        case 0x483750u: goto label_483750;
        case 0x483754u: goto label_483754;
        case 0x483758u: goto label_483758;
        case 0x48375cu: goto label_48375c;
        case 0x483760u: goto label_483760;
        case 0x483764u: goto label_483764;
        case 0x483768u: goto label_483768;
        case 0x48376cu: goto label_48376c;
        case 0x483770u: goto label_483770;
        case 0x483774u: goto label_483774;
        case 0x483778u: goto label_483778;
        case 0x48377cu: goto label_48377c;
        case 0x483780u: goto label_483780;
        case 0x483784u: goto label_483784;
        case 0x483788u: goto label_483788;
        case 0x48378cu: goto label_48378c;
        case 0x483790u: goto label_483790;
        case 0x483794u: goto label_483794;
        case 0x483798u: goto label_483798;
        case 0x48379cu: goto label_48379c;
        default: break;
    }

    ctx->pc = 0x483720u;

label_483720:
    // 0x483720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_483724:
    // 0x483724: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x483724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_483728:
    // 0x483728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x483728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_48372c:
    // 0x48372c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x48372cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_483730:
    // 0x483730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x483730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483734:
    // 0x483734: 0x8c62ad2c  lw          $v0, -0x52D4($v1)
    ctx->pc = 0x483734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946092)));
label_483738:
    // 0x483738: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x483738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_48373c:
    // 0x48373c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x48373cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_483740:
    // 0x483740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x483740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_483744:
    // 0x483744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x483744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483748:
    // 0x483748: 0x40f809  jalr        $v0
label_48374c:
    if (ctx->pc == 0x48374Cu) {
        ctx->pc = 0x48374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483748u;
        // 0x48374c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483750u;
        goto label_483750;
    }
    ctx->pc = 0x483748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483750u);
        ctx->pc = 0x48374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483748u;
        // 0x48374c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483748u, 0x483750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483750u;
label_483750:
    // 0x483750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483754:
    // 0x483754: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_483758:
    if (ctx->pc == 0x483758u) {
        ctx->pc = 0x483758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483754u;
        // 0x483758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48375Cu;
        goto label_48375c;
    }
    ctx->pc = 0x483754u;
    {
        const bool branch_taken_0x483754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x483758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483754u;
        // 0x483758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483754) {
            ctx->pc = 0x483780u;
            goto label_483780;
        }
    }
    ctx->pc = 0x48375Cu;
label_48375c:
    // 0x48375c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483760:
    // 0x483760: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x483760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_483764:
    // 0x483764: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x483764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_483768:
    // 0x483768: 0xc11eff2  jal         func_47BFC8
label_48376c:
    if (ctx->pc == 0x48376Cu) {
        ctx->pc = 0x48376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483768u;
        // 0x48376c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483770u;
        goto label_483770;
    }
    ctx->pc = 0x483768u;
    SET_GPR_U32(ctx, 31, 0x483770u);
    ctx->pc = 0x48376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483768u;
    // 0x48376c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x483768u, 0x483770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483770u;
label_483770:
    // 0x483770: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x483770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_483774:
    // 0x483774: 0xc11f024  jal         func_47C090
label_483778:
    if (ctx->pc == 0x483778u) {
        ctx->pc = 0x483778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483774u;
        // 0x483778: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48377Cu;
        goto label_48377c;
    }
    ctx->pc = 0x483774u;
    SET_GPR_U32(ctx, 31, 0x48377Cu);
    ctx->pc = 0x483778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483774u;
    // 0x483778: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x483774u, 0x48377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48377Cu;
label_48377c:
    // 0x48377c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48377cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483780:
    // 0x483780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_483784:
    // 0x483784: 0x230100b  movn        $v0, $s1, $s0
    ctx->pc = 0x483784u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_483788:
    // 0x483788: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x483788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48378c:
    // 0x48378c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48378cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_483790:
    // 0x483790: 0x3e00008  jr          $ra
label_483794:
    if (ctx->pc == 0x483794u) {
        ctx->pc = 0x483794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483790u;
        // 0x483794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483798u;
        goto label_483798;
    }
    ctx->pc = 0x483790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483790u;
        // 0x483794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483798u;
label_483798:
    // 0x483798: 0x8c620120  lw          $v0, 0x120($v1)
    ctx->pc = 0x483798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_48379c:
    // 0x48379c: 0x0  nop
    ctx->pc = 0x48379cu;
    // NOP
    ctx->pc = 0x4837a0u;
}
