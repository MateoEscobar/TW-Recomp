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

// Function: sub_0016BB58
// Address: 0x16bb58 - 0x16bbf0
void sub_0016BB58_0x16bb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BB58_0x16bb58");
#endif

    switch (ctx->pc) {
        case 0x16bb88u: goto label_16bb88;
        case 0x16bba0u: goto label_16bba0;
        case 0x16bba8u: goto label_16bba8;
        case 0x16bbb0u: goto label_16bbb0;
        case 0x16bbc0u: goto label_16bbc0;
        default: break;
    }

    ctx->pc = 0x16bb58u;

    // 0x16bb58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bb5c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16bb60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16bb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16bb64: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16bb68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16bb6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16bb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16bb74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bb78: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16BB78u;
    {
        const bool branch_taken_0x16bb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB78u;
        // 0x16bb7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb78) {
            ctx->pc = 0x16BBD4u;
            goto label_16bbd4;
        }
    }
    ctx->pc = 0x16BB80u;
    // 0x16bb80: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BB80u;
    SET_GPR_U32(ctx, 31, 0x16BB88u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BB80u, 0x16BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB88u;
label_16bb88:
    // 0x16bb88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16bb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb8c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16bb90: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16BB90u;
    {
        const bool branch_taken_0x16bb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB90u;
        // 0x16bb94: 0x24910048  addiu       $s1, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb90) {
            ctx->pc = 0x16BBD4u;
            goto label_16bbd4;
        }
    }
    ctx->pc = 0x16BB98u;
    // 0x16bb98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16bb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bba0:
    // 0x16bba0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16BBA0u;
    SET_GPR_U32(ctx, 31, 0x16BBA8u);
    ctx->pc = 0x16BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBA0u;
    // 0x16bba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16BBA0u, 0x16BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBA8u;
label_16bba8:
    // 0x16bba8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16BBA8u;
    SET_GPR_U32(ctx, 31, 0x16BBB0u);
    ctx->pc = 0x16BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBA8u;
    // 0x16bbac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16BBA8u, 0x16BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBB0u;
label_16bbb0:
    // 0x16bbb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BBB0u;
    {
        const bool branch_taken_0x16bbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bbb0) {
            ctx->pc = 0x16BBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BBB0u;
            // 0x16bbb4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BBC8u;
            goto label_16bbc8;
        }
    }
    ctx->pc = 0x16BBB8u;
    // 0x16bbb8: 0xc087502  jal         func_21D408
    ctx->pc = 0x16BBB8u;
    SET_GPR_U32(ctx, 31, 0x16BBC0u);
    ctx->pc = 0x16BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBB8u;
    // 0x16bbbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16BBB8u, 0x16BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBC0u;
label_16bbc0:
    // 0x16bbc0: 0xa052011f  sb          $s2, 0x11F($v0)
    ctx->pc = 0x16bbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 18));
    // 0x16bbc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16bbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16bbc8:
    // 0x16bbc8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16bbc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16bbcc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16BBCCu;
    {
        const bool branch_taken_0x16bbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bbcc) {
            ctx->pc = 0x16BBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BBCCu;
            // 0x16bbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BBD4u;
label_16bbd4:
    // 0x16bbd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16bbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bbd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16bbd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bbdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16bbdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x16BBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBE4u;
        // 0x16bbe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BBECu;
    // 0x16bbec: 0x0  nop
    ctx->pc = 0x16bbecu;
    // NOP
    ctx->pc = 0x16bbf0u;
}
