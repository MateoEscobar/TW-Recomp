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

// Function: sub_0028EF48
// Address: 0x28ef48 - 0x28f000
void sub_0028EF48_0x28ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EF48_0x28ef48");
#endif

    switch (ctx->pc) {
        case 0x28ef90u: goto label_28ef90;
        case 0x28ef98u: goto label_28ef98;
        case 0x28efa4u: goto label_28efa4;
        case 0x28efccu: goto label_28efcc;
        case 0x28efd8u: goto label_28efd8;
        default: break;
    }

    ctx->pc = 0x28ef48u;

    // 0x28ef48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28ef48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28ef4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28ef50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28ef54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ef54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28ef5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28ef5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef60: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28ef64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ef68: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x28ef68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ef6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EF6Cu;
    {
        const bool branch_taken_0x28ef6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF6Cu;
        // 0x28ef70: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef6c) {
            ctx->pc = 0x28EF84u;
            goto label_28ef84;
        }
    }
    ctx->pc = 0x28EF74u;
    // 0x28ef74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ef78: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x28ef78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x28ef7c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28ef7cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28ef80: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x28ef80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_28ef84:
    // 0x28ef84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ef84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef88: 0x26330164  addiu       $s3, $s1, 0x164
    ctx->pc = 0x28ef88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    // 0x28ef8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ef8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ef90:
    // 0x28ef90: 0xc137826  jal         func_4DE098
    ctx->pc = 0x28EF90u;
    SET_GPR_U32(ctx, 31, 0x28EF98u);
    ctx->pc = 0x28EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF90u;
    // 0x28ef94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28EF90u, 0x28EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF98u;
label_28ef98:
    // 0x28ef98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ef98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28ef9c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28EF9Cu;
    SET_GPR_U32(ctx, 31, 0x28EFA4u);
    ctx->pc = 0x28EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF9Cu;
    // 0x28efa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28EF9Cu, 0x28EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFA4u;
label_28efa4:
    // 0x28efa4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28EFA4u;
    {
        const bool branch_taken_0x28efa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28efa4) {
            ctx->pc = 0x28EFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EFA4u;
            // 0x28efa8: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EFDCu;
            goto label_28efdc;
        }
    }
    ctx->pc = 0x28EFACu;
    // 0x28efac: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EFACu;
    {
        const bool branch_taken_0x28efac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFACu;
        // 0x28efb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efac) {
            ctx->pc = 0x28EFC4u;
            goto label_28efc4;
        }
    }
    ctx->pc = 0x28EFB4u;
    // 0x28efb4: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x28efb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x28efb8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28efb8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28efbc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28EFBCu;
    {
        const bool branch_taken_0x28efbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFBCu;
        // 0x28efc0: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efbc) {
            ctx->pc = 0x28EFDCu;
            goto label_28efdc;
        }
    }
    ctx->pc = 0x28EFC4u;
label_28efc4:
    // 0x28efc4: 0xc087502  jal         func_21D408
    ctx->pc = 0x28EFC4u;
    SET_GPR_U32(ctx, 31, 0x28EFCCu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28EFC4u, 0x28EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFCCu;
label_28efcc:
    // 0x28efcc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28efccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28efd0: 0xc0a3bcc  jal         func_28EF30
    ctx->pc = 0x28EFD0u;
    SET_GPR_U32(ctx, 31, 0x28EFD8u);
    ctx->pc = 0x28EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFD0u;
    // 0x28efd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF30u, 0x28EFD0u, 0x28EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFD8u;
label_28efd8:
    // 0x28efd8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x28efd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_28efdc:
    // 0x28efdc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28EFDCu;
    {
        const bool branch_taken_0x28efdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFDCu;
        // 0x28efe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efdc) {
            ctx->pc = 0x28EF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ef90;
        }
    }
    ctx->pc = 0x28EFE4u;
    // 0x28efe4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28efe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28efe8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28efe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28efec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28efecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28eff0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28eff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x28EFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFF8u;
        // 0x28effc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F000u;
}
