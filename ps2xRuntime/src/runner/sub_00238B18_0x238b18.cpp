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

// Function: sub_00238B18
// Address: 0x238b18 - 0x238bd8
void sub_00238B18_0x238b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238B18_0x238b18");
#endif

    switch (ctx->pc) {
        case 0x238b44u: goto label_238b44;
        case 0x238b4cu: goto label_238b4c;
        case 0x238b68u: goto label_238b68;
        case 0x238b78u: goto label_238b78;
        case 0x238b84u: goto label_238b84;
        case 0x238b90u: goto label_238b90;
        case 0x238ba0u: goto label_238ba0;
        case 0x238bb0u: goto label_238bb0;
        case 0x238bb8u: goto label_238bb8;
        default: break;
    }

    ctx->pc = 0x238b18u;

    // 0x238b18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x238b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x238b1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x238b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x238b20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x238b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x238b24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x238b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b28: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238b2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x238b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x238b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x238b34: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x238b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x238b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238b3c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238B3Cu;
    SET_GPR_U32(ctx, 31, 0x238B44u);
    ctx->pc = 0x238B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B3Cu;
    // 0x238b40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238B3Cu, 0x238B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B44u;
label_238b44:
    // 0x238b44: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238B44u;
    SET_GPR_U32(ctx, 31, 0x238B4Cu);
    ctx->pc = 0x238B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B44u;
    // 0x238b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238B44u, 0x238B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B4Cu;
label_238b4c:
    // 0x238b4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b50: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x238B50u;
    {
        const bool branch_taken_0x238b50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B50u;
        // 0x238b54: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b50) {
            ctx->pc = 0x238BBCu;
            goto label_238bbc;
        }
    }
    ctx->pc = 0x238B58u;
    // 0x238b58: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x238b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x238b5c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x238b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x238b60: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238B60u;
    SET_GPR_U32(ctx, 31, 0x238B68u);
    ctx->pc = 0x238B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B60u;
    // 0x238b64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238B60u, 0x238B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B68u;
label_238b68:
    // 0x238b68: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x238B68u;
    {
        const bool branch_taken_0x238b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B68u;
        // 0x238b6c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b68) {
            ctx->pc = 0x238BB8u;
            goto label_238bb8;
        }
    }
    ctx->pc = 0x238B70u;
    // 0x238b70: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x238B70u;
    SET_GPR_U32(ctx, 31, 0x238B78u);
    ctx->pc = 0x238B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B70u;
    // 0x238b74: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x238B70u, 0x238B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B78u;
label_238b78:
    // 0x238b78: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x238b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x238b7c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x238B7Cu;
    SET_GPR_U32(ctx, 31, 0x238B84u);
    ctx->pc = 0x238B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B7Cu;
    // 0x238b80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x238B7Cu, 0x238B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B84u;
label_238b84:
    // 0x238b84: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x238b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x238b88: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x238B88u;
    SET_GPR_U32(ctx, 31, 0x238B90u);
    ctx->pc = 0x238B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B88u;
    // 0x238b8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x238B88u, 0x238B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B90u;
label_238b90:
    // 0x238b90: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x238b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x238b94: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x238b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x238b98: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238B98u;
    SET_GPR_U32(ctx, 31, 0x238BA0u);
    ctx->pc = 0x238B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B98u;
    // 0x238b9c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238B98u, 0x238BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BA0u;
label_238ba0:
    // 0x238ba0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x238ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x238ba4: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x238ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x238ba8: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x238BA8u;
    SET_GPR_U32(ctx, 31, 0x238BB0u);
    ctx->pc = 0x238BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BA8u;
    // 0x238bac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x238BA8u, 0x238BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BB0u;
label_238bb0:
    // 0x238bb0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x238BB0u;
    SET_GPR_U32(ctx, 31, 0x238BB8u);
    ctx->pc = 0x238BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BB0u;
    // 0x238bb4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x238BB0u, 0x238BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BB8u;
label_238bb8:
    // 0x238bb8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x238bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_238bbc:
    // 0x238bbc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x238bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238bc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x238bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238bc4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x238bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x238BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BCCu;
        // 0x238bd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238BD4u;
    // 0x238bd4: 0x0  nop
    ctx->pc = 0x238bd4u;
    // NOP
    ctx->pc = 0x238bd8u;
}
