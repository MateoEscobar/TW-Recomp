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

// Function: sub_00165548
// Address: 0x165548 - 0x1655e0
void sub_00165548_0x165548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165548_0x165548");
#endif

    switch (ctx->pc) {
        case 0x165578u: goto label_165578;
        case 0x165580u: goto label_165580;
        case 0x165588u: goto label_165588;
        case 0x165598u: goto label_165598;
        case 0x1655a4u: goto label_1655a4;
        default: break;
    }

    ctx->pc = 0x165548u;

    // 0x165548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16554c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x165550: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x165550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x165554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x165554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16555c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16555cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165560: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x165560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x165564: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x165564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16556c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16556cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165570: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x165570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x165574: 0x0  nop
    ctx->pc = 0x165574u;
    // NOP
label_165578:
    // 0x165578: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165578u;
    SET_GPR_U32(ctx, 31, 0x165580u);
    ctx->pc = 0x16557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165578u;
    // 0x16557c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165578u, 0x165580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165580u;
label_165580:
    // 0x165580: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165580u;
    SET_GPR_U32(ctx, 31, 0x165588u);
    ctx->pc = 0x165584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165580u;
    // 0x165584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165580u, 0x165588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165588u;
label_165588:
    // 0x165588: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x165588u;
    {
        const bool branch_taken_0x165588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165588) {
            ctx->pc = 0x16558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165588u;
            // 0x16558c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1655B4u;
            goto label_1655b4;
        }
    }
    ctx->pc = 0x165590u;
    // 0x165590: 0xc087502  jal         func_21D408
    ctx->pc = 0x165590u;
    SET_GPR_U32(ctx, 31, 0x165598u);
    ctx->pc = 0x165594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165590u;
    // 0x165594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165590u, 0x165598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165598u;
label_165598:
    // 0x165598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x165598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16559c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x16559Cu;
    SET_GPR_U32(ctx, 31, 0x1655A4u);
    ctx->pc = 0x1655A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16559Cu;
    // 0x1655a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x16559Cu, 0x1655A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655A4u;
label_1655a4:
    // 0x1655a4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1655a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1655a8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1655a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1655ac: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1655acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1655b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1655b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1655b4:
    // 0x1655b4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x1655b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1655b8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1655B8u;
    {
        const bool branch_taken_0x1655b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1655BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655B8u;
        // 0x1655bc: 0x26640048  addiu       $a0, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655b8) {
            ctx->pc = 0x165578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165578;
        }
    }
    ctx->pc = 0x1655C0u;
    // 0x1655c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1655c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1655c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1655c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1655c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1655cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1655ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1655d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1655d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1655d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1655d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1655d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1655D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1655DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D8u;
        // 0x1655dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1655D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1655E0u;
}
