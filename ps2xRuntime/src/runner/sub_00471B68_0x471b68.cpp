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

// Function: sub_00471B68
// Address: 0x471b68 - 0x471bf0
void sub_00471B68_0x471b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471B68_0x471b68");
#endif

    switch (ctx->pc) {
        case 0x471b68u: goto label_471b68;
        case 0x471b6cu: goto label_471b6c;
        case 0x471b70u: goto label_471b70;
        case 0x471b74u: goto label_471b74;
        case 0x471b78u: goto label_471b78;
        case 0x471b7cu: goto label_471b7c;
        case 0x471b80u: goto label_471b80;
        case 0x471b84u: goto label_471b84;
        case 0x471b88u: goto label_471b88;
        case 0x471b8cu: goto label_471b8c;
        case 0x471b90u: goto label_471b90;
        case 0x471b94u: goto label_471b94;
        case 0x471b98u: goto label_471b98;
        case 0x471b9cu: goto label_471b9c;
        case 0x471ba0u: goto label_471ba0;
        case 0x471ba4u: goto label_471ba4;
        case 0x471ba8u: goto label_471ba8;
        case 0x471bacu: goto label_471bac;
        case 0x471bb0u: goto label_471bb0;
        case 0x471bb4u: goto label_471bb4;
        case 0x471bb8u: goto label_471bb8;
        case 0x471bbcu: goto label_471bbc;
        case 0x471bc0u: goto label_471bc0;
        case 0x471bc4u: goto label_471bc4;
        case 0x471bc8u: goto label_471bc8;
        case 0x471bccu: goto label_471bcc;
        case 0x471bd0u: goto label_471bd0;
        case 0x471bd4u: goto label_471bd4;
        case 0x471bd8u: goto label_471bd8;
        case 0x471bdcu: goto label_471bdc;
        case 0x471be0u: goto label_471be0;
        case 0x471be4u: goto label_471be4;
        case 0x471be8u: goto label_471be8;
        case 0x471becu: goto label_471bec;
        default: break;
    }

    ctx->pc = 0x471b68u;

label_471b68:
    // 0x471b68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x471b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_471b6c:
    // 0x471b6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x471b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_471b70:
    // 0x471b70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x471b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_471b74:
    // 0x471b74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x471b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471b78:
    // 0x471b78: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x471b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_471b7c:
    // 0x471b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x471b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471b80:
    // 0x471b80: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x471b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_471b84:
    // 0x471b84: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x471b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_471b88:
    // 0x471b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_471b8c:
    // 0x471b8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x471b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_471b90:
    // 0x471b90: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x471b90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_471b94:
    // 0x471b94: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_471b98:
    if (ctx->pc == 0x471B98u) {
        ctx->pc = 0x471B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B94u;
        // 0x471b98: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471B9Cu;
        goto label_471b9c;
    }
    ctx->pc = 0x471B94u;
    {
        const bool branch_taken_0x471b94 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x471B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B94u;
        // 0x471b98: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471b94) {
            ctx->pc = 0x471BC8u;
            goto label_471bc8;
        }
    }
    ctx->pc = 0x471B9Cu;
label_471b9c:
    // 0x471b9c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x471b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_471ba0:
    // 0x471ba0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x471ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_471ba4:
    // 0x471ba4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x471ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_471ba8:
    // 0x471ba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x471ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_471bac:
    // 0x471bac: 0x280f809  jalr        $s4
label_471bb0:
    if (ctx->pc == 0x471BB0u) {
        ctx->pc = 0x471BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471BACu;
        // 0x471bb0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471BB4u;
        goto label_471bb4;
    }
    ctx->pc = 0x471BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x471BB4u);
        ctx->pc = 0x471BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471BACu;
        // 0x471bb0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471BACu, 0x471BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471BB4u;
label_471bb4:
    // 0x471bb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_471bb8:
    if (ctx->pc == 0x471BB8u) {
        ctx->pc = 0x471BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471BB4u;
        // 0x471bb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471BBCu;
        goto label_471bbc;
    }
    ctx->pc = 0x471BB4u;
    {
        const bool branch_taken_0x471bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471BB4u;
        // 0x471bb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471bb4) {
            ctx->pc = 0x471BC8u;
            goto label_471bc8;
        }
    }
    ctx->pc = 0x471BBCu;
label_471bbc:
    // 0x471bbc: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x471bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_471bc0:
    // 0x471bc0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_471bc4:
    if (ctx->pc == 0x471BC4u) {
        ctx->pc = 0x471BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471BC0u;
        // 0x471bc4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471BC8u;
        goto label_471bc8;
    }
    ctx->pc = 0x471BC0u;
    {
        const bool branch_taken_0x471bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x471bc0) {
            ctx->pc = 0x471BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471BC0u;
            // 0x471bc4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471ba0;
        }
    }
    ctx->pc = 0x471BC8u;
label_471bc8:
    // 0x471bc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x471bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_471bcc:
    // 0x471bcc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x471bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_471bd0:
    // 0x471bd0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x471bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_471bd4:
    // 0x471bd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x471bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_471bd8:
    // 0x471bd8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x471bd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471bdc:
    // 0x471bdc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x471bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471be0:
    // 0x471be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_471be4:
    // 0x471be4: 0x3e00008  jr          $ra
label_471be8:
    if (ctx->pc == 0x471BE8u) {
        ctx->pc = 0x471BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471BE4u;
        // 0x471be8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471BECu;
        goto label_471bec;
    }
    ctx->pc = 0x471BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471BE4u;
        // 0x471be8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471BECu;
label_471bec:
    // 0x471bec: 0x0  nop
    ctx->pc = 0x471becu;
    // NOP
    ctx->pc = 0x471bf0u;
}
