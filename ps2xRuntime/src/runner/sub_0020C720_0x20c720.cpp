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

// Function: sub_0020C720
// Address: 0x20c720 - 0x20c798
void sub_0020C720_0x20c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C720_0x20c720");
#endif

    switch (ctx->pc) {
        case 0x20c720u: goto label_20c720;
        case 0x20c724u: goto label_20c724;
        case 0x20c728u: goto label_20c728;
        case 0x20c72cu: goto label_20c72c;
        case 0x20c730u: goto label_20c730;
        case 0x20c734u: goto label_20c734;
        case 0x20c738u: goto label_20c738;
        case 0x20c73cu: goto label_20c73c;
        case 0x20c740u: goto label_20c740;
        case 0x20c744u: goto label_20c744;
        case 0x20c748u: goto label_20c748;
        case 0x20c74cu: goto label_20c74c;
        case 0x20c750u: goto label_20c750;
        case 0x20c754u: goto label_20c754;
        case 0x20c758u: goto label_20c758;
        case 0x20c75cu: goto label_20c75c;
        case 0x20c760u: goto label_20c760;
        case 0x20c764u: goto label_20c764;
        case 0x20c768u: goto label_20c768;
        case 0x20c76cu: goto label_20c76c;
        case 0x20c770u: goto label_20c770;
        case 0x20c774u: goto label_20c774;
        case 0x20c778u: goto label_20c778;
        case 0x20c77cu: goto label_20c77c;
        case 0x20c780u: goto label_20c780;
        case 0x20c784u: goto label_20c784;
        case 0x20c788u: goto label_20c788;
        case 0x20c78cu: goto label_20c78c;
        case 0x20c790u: goto label_20c790;
        case 0x20c794u: goto label_20c794;
        default: break;
    }

    ctx->pc = 0x20c720u;

label_20c720:
    // 0x20c720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20c724:
    // 0x20c724: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20c728:
    // 0x20c728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c72c:
    // 0x20c72c: 0xc081012  jal         func_204048
label_20c730:
    if (ctx->pc == 0x20C730u) {
        ctx->pc = 0x20C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C72Cu;
        // 0x20c730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C734u;
        goto label_20c734;
    }
    ctx->pc = 0x20C72Cu;
    SET_GPR_U32(ctx, 31, 0x20C734u);
    ctx->pc = 0x20C730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C72Cu;
    // 0x20c730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204048u, 0x20C72Cu, 0x20C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C734u;
label_20c734:
    // 0x20c734: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_20c738:
    if (ctx->pc == 0x20C738u) {
        ctx->pc = 0x20C73Cu;
        goto label_20c73c;
    }
    ctx->pc = 0x20C734u;
    {
        const bool branch_taken_0x20c734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c734) {
            ctx->pc = 0x20C778u;
            goto label_20c778;
        }
    }
    ctx->pc = 0x20C73Cu;
label_20c73c:
    // 0x20c73c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20c740:
    // 0x20c740: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20c740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c744:
    // 0x20c744: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x20c744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_20c748:
    // 0x20c748: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20c748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20c74c:
    // 0x20c74c: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x20c74cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_20c750:
    // 0x20c750: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x20c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_20c754:
    // 0x20c754: 0x60f809  jalr        $v1
label_20c758:
    if (ctx->pc == 0x20C758u) {
        ctx->pc = 0x20C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C754u;
        // 0x20c758: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C75Cu;
        goto label_20c75c;
    }
    ctx->pc = 0x20C754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C75Cu);
        ctx->pc = 0x20C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C754u;
        // 0x20c758: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C754u, 0x20C75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C75Cu;
label_20c75c:
    // 0x20c75c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c760:
    // 0x20c760: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20c760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20c764:
    // 0x20c764: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20c768:
    // 0x20c768: 0x60f809  jalr        $v1
label_20c76c:
    if (ctx->pc == 0x20C76Cu) {
        ctx->pc = 0x20C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C768u;
        // 0x20c76c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C770u;
        goto label_20c770;
    }
    ctx->pc = 0x20C768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C770u);
        ctx->pc = 0x20C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C768u;
        // 0x20c76c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C768u, 0x20C770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C770u;
label_20c770:
    // 0x20c770: 0x10000004  b           . + 4 + (0x4 << 2)
label_20c774:
    if (ctx->pc == 0x20C774u) {
        ctx->pc = 0x20C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C770u;
        // 0x20c774: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C778u;
        goto label_20c778;
    }
    ctx->pc = 0x20C770u;
    {
        const bool branch_taken_0x20c770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C770u;
        // 0x20c774: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c770) {
            ctx->pc = 0x20C784u;
            goto label_20c784;
        }
    }
    ctx->pc = 0x20C778u;
label_20c778:
    // 0x20c778: 0xc08100e  jal         func_204038
label_20c77c:
    if (ctx->pc == 0x20C77Cu) {
        ctx->pc = 0x20C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C778u;
        // 0x20c77c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C780u;
        goto label_20c780;
    }
    ctx->pc = 0x20C778u;
    SET_GPR_U32(ctx, 31, 0x20C780u);
    ctx->pc = 0x20C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C778u;
    // 0x20c77c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204038u, 0x20C778u, 0x20C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C780u;
label_20c780:
    // 0x20c780: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c784:
    // 0x20c784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c788:
    // 0x20c788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c78c:
    // 0x20c78c: 0x3e00008  jr          $ra
label_20c790:
    if (ctx->pc == 0x20C790u) {
        ctx->pc = 0x20C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C78Cu;
        // 0x20c790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C794u;
        goto label_20c794;
    }
    ctx->pc = 0x20C78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C78Cu;
        // 0x20c790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C794u;
label_20c794:
    // 0x20c794: 0x0  nop
    ctx->pc = 0x20c794u;
    // NOP
    ctx->pc = 0x20c798u;
}
