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

// Function: sub_004BF728
// Address: 0x4bf728 - 0x4bf7a8
void sub_004BF728_0x4bf728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF728_0x4bf728");
#endif

    switch (ctx->pc) {
        case 0x4bf728u: goto label_4bf728;
        case 0x4bf72cu: goto label_4bf72c;
        case 0x4bf730u: goto label_4bf730;
        case 0x4bf734u: goto label_4bf734;
        case 0x4bf738u: goto label_4bf738;
        case 0x4bf73cu: goto label_4bf73c;
        case 0x4bf740u: goto label_4bf740;
        case 0x4bf744u: goto label_4bf744;
        case 0x4bf748u: goto label_4bf748;
        case 0x4bf74cu: goto label_4bf74c;
        case 0x4bf750u: goto label_4bf750;
        case 0x4bf754u: goto label_4bf754;
        case 0x4bf758u: goto label_4bf758;
        case 0x4bf75cu: goto label_4bf75c;
        case 0x4bf760u: goto label_4bf760;
        case 0x4bf764u: goto label_4bf764;
        case 0x4bf768u: goto label_4bf768;
        case 0x4bf76cu: goto label_4bf76c;
        case 0x4bf770u: goto label_4bf770;
        case 0x4bf774u: goto label_4bf774;
        case 0x4bf778u: goto label_4bf778;
        case 0x4bf77cu: goto label_4bf77c;
        case 0x4bf780u: goto label_4bf780;
        case 0x4bf784u: goto label_4bf784;
        case 0x4bf788u: goto label_4bf788;
        case 0x4bf78cu: goto label_4bf78c;
        case 0x4bf790u: goto label_4bf790;
        case 0x4bf794u: goto label_4bf794;
        case 0x4bf798u: goto label_4bf798;
        case 0x4bf79cu: goto label_4bf79c;
        case 0x4bf7a0u: goto label_4bf7a0;
        case 0x4bf7a4u: goto label_4bf7a4;
        default: break;
    }

    ctx->pc = 0x4bf728u;

label_4bf728:
    // 0x4bf728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf72c:
    // 0x4bf72c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4bf72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4bf730:
    // 0x4bf730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf734:
    // 0x4bf734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bf734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf738:
    // 0x4bf738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4bf73c:
    // 0x4bf73c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4bf73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4bf740:
    // 0x4bf740: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4bf744:
    if (ctx->pc == 0x4BF744u) {
        ctx->pc = 0x4BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF740u;
        // 0x4bf744: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF748u;
        goto label_4bf748;
    }
    ctx->pc = 0x4BF740u;
    {
        const bool branch_taken_0x4bf740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF740u;
        // 0x4bf744: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf740) {
            ctx->pc = 0x4BF770u;
            goto label_4bf770;
        }
    }
    ctx->pc = 0x4BF748u;
label_4bf748:
    // 0x4bf748: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x4bf748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4bf74c:
    // 0x4bf74c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4bf74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4bf750:
    // 0x4bf750: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x4bf750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4bf754:
    // 0x4bf754: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bf754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4bf758:
    // 0x4bf758: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x4bf758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_4bf75c:
    // 0x4bf75c: 0x40f809  jalr        $v0
label_4bf760:
    if (ctx->pc == 0x4BF760u) {
        ctx->pc = 0x4BF764u;
        goto label_4bf764;
    }
    ctx->pc = 0x4BF75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4BF764u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF75Cu, 0x4BF764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4BF764u;
label_4bf764:
    // 0x4bf764: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4bf764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4bf768:
    // 0x4bf768: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_4bf76c:
    if (ctx->pc == 0x4BF76Cu) {
        ctx->pc = 0x4BF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF768u;
        // 0x4bf76c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF770u;
        goto label_4bf770;
    }
    ctx->pc = 0x4BF768u;
    {
        const bool branch_taken_0x4bf768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bf768) {
            ctx->pc = 0x4BF76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF768u;
            // 0x4bf76c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bf750;
        }
    }
    ctx->pc = 0x4BF770u;
label_4bf770:
    // 0x4bf770: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bf770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf774:
    // 0x4bf774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf778:
    // 0x4bf778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf77c:
    // 0x4bf77c: 0x3e00008  jr          $ra
label_4bf780:
    if (ctx->pc == 0x4BF780u) {
        ctx->pc = 0x4BF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF77Cu;
        // 0x4bf780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF784u;
        goto label_4bf784;
    }
    ctx->pc = 0x4BF77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF77Cu;
        // 0x4bf780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF784u;
label_4bf784:
    // 0x4bf784: 0x0  nop
    ctx->pc = 0x4bf784u;
    // NOP
label_4bf788:
    // 0x4bf788: 0x0  nop
    ctx->pc = 0x4bf788u;
    // NOP
label_4bf78c:
    // 0x4bf78c: 0x0  nop
    ctx->pc = 0x4bf78cu;
    // NOP
label_4bf790:
    // 0x4bf790: 0x0  nop
    ctx->pc = 0x4bf790u;
    // NOP
label_4bf794:
    // 0x4bf794: 0x0  nop
    ctx->pc = 0x4bf794u;
    // NOP
label_4bf798:
    // 0x4bf798: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4bf798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4bf79c:
    // 0x4bf79c: 0x0  nop
    ctx->pc = 0x4bf79cu;
    // NOP
label_4bf7a0:
    // 0x4bf7a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4bf7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4bf7a4:
    // 0x4bf7a4: 0x0  nop
    ctx->pc = 0x4bf7a4u;
    // NOP
    ctx->pc = 0x4bf7a8u;
}
