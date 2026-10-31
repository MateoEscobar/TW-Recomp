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

// Function: sub_00462B30
// Address: 0x462b30 - 0x462bc0
void sub_00462B30_0x462b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462B30_0x462b30");
#endif

    switch (ctx->pc) {
        case 0x462b68u: goto label_462b68;
        case 0x462b9cu: goto label_462b9c;
        default: break;
    }

    ctx->pc = 0x462b30u;

    // 0x462b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x462b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x462b34: 0x8f828890  lw          $v0, -0x7770($gp)
    ctx->pc = 0x462b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
    // 0x462b38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x462b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x462b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x462b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x462b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x462b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x462b48: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x462b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x462b4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x462b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x462b50: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x462B50u;
    {
        const bool branch_taken_0x462b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x462B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462B50u;
        // 0x462b54: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462b50) {
            ctx->pc = 0x462BA4u;
            goto label_462ba4;
        }
    }
    ctx->pc = 0x462B58u;
    // 0x462b58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x462b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x462b5c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x462B5Cu;
    {
        const bool branch_taken_0x462b5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x462B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462B5Cu;
        // 0x462b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462b5c) {
            ctx->pc = 0x462B88u;
            goto label_462b88;
        }
    }
    ctx->pc = 0x462B64u;
    // 0x462b64: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x462b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_462b68:
    // 0x462b68: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x462b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x462b6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x462b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x462b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x462b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x462b74: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x462b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x462b78: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x462b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x462b7c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x462b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x462b80: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x462B80u;
    {
        const bool branch_taken_0x462b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x462b80) {
            ctx->pc = 0x462B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462B80u;
            // 0x462b84: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x462B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_462b68;
        }
    }
    ctx->pc = 0x462B88u;
label_462b88:
    // 0x462b88: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x462b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x462b8c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x462B8Cu;
    {
        const bool branch_taken_0x462b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x462b8c) {
            ctx->pc = 0x462B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462B8Cu;
            // 0x462b90: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x462BA0u;
            goto label_462ba0;
        }
    }
    ctx->pc = 0x462B94u;
    // 0x462b94: 0xc118a14  jal         func_462850
    ctx->pc = 0x462B94u;
    SET_GPR_U32(ctx, 31, 0x462B9Cu);
    ctx->pc = 0x462850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462850u, 0x462B94u, 0x462B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462B9Cu;
label_462b9c:
    // 0x462b9c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x462b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_462ba0:
    // 0x462ba0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x462ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_462ba4:
    // 0x462ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x462ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462ba8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x462ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x462bac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x462bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x462bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x462bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x462bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x462BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462BB8u;
        // 0x462bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462BC0u;
}
