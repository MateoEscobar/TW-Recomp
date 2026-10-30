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

// Function: sub_0016B460
// Address: 0x16b460 - 0x16b4f0
void sub_0016B460_0x16b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B460_0x16b460");
#endif

    switch (ctx->pc) {
        case 0x16b494u: goto label_16b494;
        case 0x16b4a0u: goto label_16b4a0;
        case 0x16b4a8u: goto label_16b4a8;
        case 0x16b4b0u: goto label_16b4b0;
        case 0x16b4c0u: goto label_16b4c0;
        default: break;
    }

    ctx->pc = 0x16b460u;

    // 0x16b460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b464: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b468: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16b46c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x16b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x16b470: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16b470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16b474: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b474u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b47c: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x16b47cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x16b480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b484: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16B484u;
    {
        const bool branch_taken_0x16b484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B484u;
        // 0x16b488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b484) {
            ctx->pc = 0x16B4D4u;
            goto label_16b4d4;
        }
    }
    ctx->pc = 0x16B48Cu;
    // 0x16b48c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B48Cu;
    SET_GPR_U32(ctx, 31, 0x16B494u);
    ctx->pc = 0x16B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B48Cu;
    // 0x16b490: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B48Cu, 0x16B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B494u;
label_16b494:
    // 0x16b494: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x16b494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x16b498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b49c: 0x0  nop
    ctx->pc = 0x16b49cu;
    // NOP
label_16b4a0:
    // 0x16b4a0: 0xc137866  jal         func_4DE198
    ctx->pc = 0x16B4A0u;
    SET_GPR_U32(ctx, 31, 0x16B4A8u);
    ctx->pc = 0x16B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4A0u;
    // 0x16b4a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16B4A0u, 0x16B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4A8u;
label_16b4a8:
    // 0x16b4a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16B4A8u;
    SET_GPR_U32(ctx, 31, 0x16B4B0u);
    ctx->pc = 0x16B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4A8u;
    // 0x16b4ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B4A8u, 0x16B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4B0u;
label_16b4b0:
    // 0x16b4b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B4B0u;
    {
        const bool branch_taken_0x16b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4b0) {
            ctx->pc = 0x16B4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B4B0u;
            // 0x16b4b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B4C8u;
            goto label_16b4c8;
        }
    }
    ctx->pc = 0x16B4B8u;
    // 0x16b4b8: 0xc087502  jal         func_21D408
    ctx->pc = 0x16B4B8u;
    SET_GPR_U32(ctx, 31, 0x16B4C0u);
    ctx->pc = 0x16B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4B8u;
    // 0x16b4bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16B4B8u, 0x16B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4C0u;
label_16b4c0:
    // 0x16b4c0: 0xac520220  sw          $s2, 0x220($v0)
    ctx->pc = 0x16b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 18));
    // 0x16b4c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16b4c8:
    // 0x16b4c8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16b4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16b4cc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16B4CCu;
    {
        const bool branch_taken_0x16b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b4cc) {
            ctx->pc = 0x16B4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B4CCu;
            // 0x16b4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b4a0;
        }
    }
    ctx->pc = 0x16B4D4u;
label_16b4d4:
    // 0x16b4d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16b4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b4d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b4dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16b4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4E4u;
        // 0x16b4e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B4ECu;
    // 0x16b4ec: 0x0  nop
    ctx->pc = 0x16b4ecu;
    // NOP
    ctx->pc = 0x16b4f0u;
}
