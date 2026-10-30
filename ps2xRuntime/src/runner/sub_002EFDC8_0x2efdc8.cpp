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

// Function: sub_002EFDC8
// Address: 0x2efdc8 - 0x2efe68
void sub_002EFDC8_0x2efdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFDC8_0x2efdc8");
#endif

    switch (ctx->pc) {
        case 0x2efdfcu: goto label_2efdfc;
        case 0x2efe04u: goto label_2efe04;
        case 0x2efe18u: goto label_2efe18;
        case 0x2efe24u: goto label_2efe24;
        case 0x2efe30u: goto label_2efe30;
        case 0x2efe40u: goto label_2efe40;
        case 0x2efe48u: goto label_2efe48;
        default: break;
    }

    ctx->pc = 0x2efdc8u;

    // 0x2efdc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2efdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2efdcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2efdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2efdd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2efdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2efdd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2efdd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efdd8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2efdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2efddc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2efddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efde0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2efde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2efde4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EFDE4u;
    {
        const bool branch_taken_0x2efde4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDE4u;
        // 0x2efde8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efde4) {
            ctx->pc = 0x2EFE48u;
            goto label_2efe48;
        }
    }
    ctx->pc = 0x2EFDECu;
    // 0x2efdec: 0x8ca20360  lw          $v0, 0x360($a1)
    ctx->pc = 0x2efdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 864)));
    // 0x2efdf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2efdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efdf4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2EFDF4u;
    SET_GPR_U32(ctx, 31, 0x2EFDFCu);
    ctx->pc = 0x2EFDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDF4u;
    // 0x2efdf8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2EFDF4u, 0x2EFDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFDFCu;
label_2efdfc:
    // 0x2efdfc: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x2EFDFCu;
    SET_GPR_U32(ctx, 31, 0x2EFE04u);
    ctx->pc = 0x2EFE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDFCu;
    // 0x2efe00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2EFDFCu, 0x2EFE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE04u;
label_2efe04:
    // 0x2efe04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2efe04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe08: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2EFE08u;
    {
        const bool branch_taken_0x2efe08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE08u;
        // 0x2efe0c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe08) {
            ctx->pc = 0x2EFE48u;
            goto label_2efe48;
        }
    }
    ctx->pc = 0x2EFE10u;
    // 0x2efe10: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2EFE10u;
    SET_GPR_U32(ctx, 31, 0x2EFE18u);
    ctx->pc = 0x2EFE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE10u;
    // 0x2efe14: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2EFE10u, 0x2EFE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE18u;
label_2efe18:
    // 0x2efe18: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2efe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2efe1c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x2EFE1Cu;
    SET_GPR_U32(ctx, 31, 0x2EFE24u);
    ctx->pc = 0x2EFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE1Cu;
    // 0x2efe20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2EFE1Cu, 0x2EFE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE24u;
label_2efe24:
    // 0x2efe24: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2efe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2efe28: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x2EFE28u;
    SET_GPR_U32(ctx, 31, 0x2EFE30u);
    ctx->pc = 0x2EFE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE28u;
    // 0x2efe2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2EFE28u, 0x2EFE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE30u;
label_2efe30:
    // 0x2efe30: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2efe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2efe34: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x2efe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2efe38: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x2EFE38u;
    SET_GPR_U32(ctx, 31, 0x2EFE40u);
    ctx->pc = 0x2EFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE38u;
    // 0x2efe3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2EFE38u, 0x2EFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE40u;
label_2efe40:
    // 0x2efe40: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2EFE40u;
    SET_GPR_U32(ctx, 31, 0x2EFE48u);
    ctx->pc = 0x2EFE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE40u;
    // 0x2efe44: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2EFE40u, 0x2EFE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE48u;
label_2efe48:
    // 0x2efe48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2efe48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2efe4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2efe4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2efe50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2efe50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2efe54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2efe54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efe58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2efe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE5Cu;
        // 0x2efe60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFE64u;
    // 0x2efe64: 0x0  nop
    ctx->pc = 0x2efe64u;
    // NOP
    ctx->pc = 0x2efe68u;
}
