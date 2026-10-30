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

// Function: sub_003D9710
// Address: 0x3d9710 - 0x3d97a0
void sub_003D9710_0x3d9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9710_0x3d9710");
#endif

    switch (ctx->pc) {
        case 0x3d9710u: goto label_3d9710;
        case 0x3d9714u: goto label_3d9714;
        case 0x3d9718u: goto label_3d9718;
        case 0x3d971cu: goto label_3d971c;
        case 0x3d9720u: goto label_3d9720;
        case 0x3d9724u: goto label_3d9724;
        case 0x3d9728u: goto label_3d9728;
        case 0x3d972cu: goto label_3d972c;
        case 0x3d9730u: goto label_3d9730;
        case 0x3d9734u: goto label_3d9734;
        case 0x3d9738u: goto label_3d9738;
        case 0x3d973cu: goto label_3d973c;
        case 0x3d9740u: goto label_3d9740;
        case 0x3d9744u: goto label_3d9744;
        case 0x3d9748u: goto label_3d9748;
        case 0x3d974cu: goto label_3d974c;
        case 0x3d9750u: goto label_3d9750;
        case 0x3d9754u: goto label_3d9754;
        case 0x3d9758u: goto label_3d9758;
        case 0x3d975cu: goto label_3d975c;
        case 0x3d9760u: goto label_3d9760;
        case 0x3d9764u: goto label_3d9764;
        case 0x3d9768u: goto label_3d9768;
        case 0x3d976cu: goto label_3d976c;
        case 0x3d9770u: goto label_3d9770;
        case 0x3d9774u: goto label_3d9774;
        case 0x3d9778u: goto label_3d9778;
        case 0x3d977cu: goto label_3d977c;
        case 0x3d9780u: goto label_3d9780;
        case 0x3d9784u: goto label_3d9784;
        case 0x3d9788u: goto label_3d9788;
        case 0x3d978cu: goto label_3d978c;
        case 0x3d9790u: goto label_3d9790;
        case 0x3d9794u: goto label_3d9794;
        case 0x3d9798u: goto label_3d9798;
        case 0x3d979cu: goto label_3d979c;
        default: break;
    }

    ctx->pc = 0x3d9710u;

label_3d9710:
    // 0x3d9710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d9710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d9714:
    // 0x3d9714: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d9714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3d9718:
    // 0x3d9718: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d9718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d971c:
    // 0x3d971c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d971cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9720:
    // 0x3d9720: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3d9724:
    // 0x3d9724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d9728:
    // 0x3d9728: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d9728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d972c:
    // 0x3d972c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9730:
    // 0x3d9730: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d9730u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d9734:
    // 0x3d9734: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d9734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d9738:
    // 0x3d9738: 0x40f809  jalr        $v0
label_3d973c:
    if (ctx->pc == 0x3D973Cu) {
        ctx->pc = 0x3D973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9738u;
        // 0x3d973c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9740u;
        goto label_3d9740;
    }
    ctx->pc = 0x3D9738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9740u);
        ctx->pc = 0x3D973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9738u;
        // 0x3d973c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9738u, 0x3D9740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9740u;
label_3d9740:
    // 0x3d9740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d9740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9744:
    // 0x3d9744: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3d9744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3d9748:
    // 0x3d9748: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3d974c:
    if (ctx->pc == 0x3D974Cu) {
        ctx->pc = 0x3D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9748u;
        // 0x3d974c: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9750u;
        goto label_3d9750;
    }
    ctx->pc = 0x3D9748u;
    {
        const bool branch_taken_0x3d9748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9748u;
        // 0x3d974c: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9748) {
            ctx->pc = 0x3D976Cu;
            goto label_3d976c;
        }
    }
    ctx->pc = 0x3D9750u;
label_3d9750:
    // 0x3d9750: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3d9754:
    if (ctx->pc == 0x3D9754u) {
        ctx->pc = 0x3D9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9750u;
        // 0x3d9754: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9758u;
        goto label_3d9758;
    }
    ctx->pc = 0x3D9750u;
    {
        const bool branch_taken_0x3d9750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9750) {
            ctx->pc = 0x3D9754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9750u;
            // 0x3d9754: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9788u;
            goto label_3d9788;
        }
    }
    ctx->pc = 0x3D9758u;
label_3d9758:
    // 0x3d9758: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x3d9758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3d975c:
    // 0x3d975c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_3d9760:
    if (ctx->pc == 0x3D9760u) {
        ctx->pc = 0x3D9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D975Cu;
        // 0x3d9760: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9764u;
        goto label_3d9764;
    }
    ctx->pc = 0x3D975Cu;
    {
        const bool branch_taken_0x3d975c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D975Cu;
        // 0x3d9760: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d975c) {
            ctx->pc = 0x3D9778u;
            goto label_3d9778;
        }
    }
    ctx->pc = 0x3D9764u;
label_3d9764:
    // 0x3d9764: 0x10000009  b           . + 4 + (0x9 << 2)
label_3d9768:
    if (ctx->pc == 0x3D9768u) {
        ctx->pc = 0x3D9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9764u;
        // 0x3d9768: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D976Cu;
        goto label_3d976c;
    }
    ctx->pc = 0x3D9764u;
    {
        const bool branch_taken_0x3d9764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9764u;
        // 0x3d9768: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9764) {
            ctx->pc = 0x3D978Cu;
            goto label_3d978c;
        }
    }
    ctx->pc = 0x3D976Cu;
label_3d976c:
    // 0x3d976c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d9770:
    // 0x3d9770: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d9774:
    if (ctx->pc == 0x3D9774u) {
        ctx->pc = 0x3D9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9770u;
        // 0x3d9774: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9778u;
        goto label_3d9778;
    }
    ctx->pc = 0x3D9770u;
    {
        const bool branch_taken_0x3d9770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9770u;
        // 0x3d9774: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9770) {
            ctx->pc = 0x3D9784u;
            goto label_3d9784;
        }
    }
    ctx->pc = 0x3D9778u;
label_3d9778:
    // 0x3d9778: 0xc0ea146  jal         func_3A8518
label_3d977c:
    if (ctx->pc == 0x3D977Cu) {
        ctx->pc = 0x3D977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9778u;
        // 0x3d977c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9780u;
        goto label_3d9780;
    }
    ctx->pc = 0x3D9778u;
    SET_GPR_U32(ctx, 31, 0x3D9780u);
    ctx->pc = 0x3D977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9778u;
    // 0x3d977c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D9778u, 0x3D9780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9780u;
label_3d9780:
    // 0x3d9780: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3d9780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_3d9784:
    // 0x3d9784: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d9784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9788:
    // 0x3d9788: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d9788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d978c:
    // 0x3d978c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d978cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9790:
    // 0x3d9790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9794:
    // 0x3d9794: 0x3e00008  jr          $ra
label_3d9798:
    if (ctx->pc == 0x3D9798u) {
        ctx->pc = 0x3D9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9794u;
        // 0x3d9798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D979Cu;
        goto label_3d979c;
    }
    ctx->pc = 0x3D9794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9794u;
        // 0x3d9798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D979Cu;
label_3d979c:
    // 0x3d979c: 0x0  nop
    ctx->pc = 0x3d979cu;
    // NOP
    ctx->pc = 0x3d97a0u;
}
